pragma SPARK_Mode (On);

with AS_Io_Wrapper;    use AS_Io_Wrapper;
with AirbagDeployment; use AirbagDeployment;

procedure Main is

   Output            : OutputRecord;
   User_Input_Speed  : SpeedNumber;
   User_Input_Time   : TimeNumber;
   User_Input_Weight : WeightNumber;
   Dec               : Integer;
   User_Input        : String (1 .. 20);
   User_Input_Int    : Integer;
   Last              : Integer;
begin

   loop

      loop

         AS_Put ("Enter the speed of the car: ");
         AS_Get (User_Input_Int);
         exit when User_Input_Int in SpeedNumber;
         AS_Put_Line ("Please Enter a number between 0 and 250");
      end loop;
      User_Input_Speed := User_Input_Int;

      loop
         AS_Put
           ("Enter the time (in seconds) it took for the speed to change: ");
         AS_Get (User_Input_Int);
         exit when User_Input_Int in TimeNumber;
         AS_Put_Line ("Please Enter a number between 0 and 120");
      end loop;
      User_Input_Time := User_Input_Int;

      loop
         AS_Put ("Enter the weight of the passenger: ");
         AS_Get (User_Input_Int);
         exit when User_Input_Int in WeightNumber;
         AS_Put_Line ("Please Enter a number between 0 and 200");
      end loop;
      User_Input_Weight := User_Input_Int;

      --calculating the deceleration
      Dec := deceleration (User_Input_Speed, User_Input_Time);

      --calling the actual deployAirbag function with the
      --deceleration as an input
      deployAirbag (User_Input_Weight, Dec, Output);

      AS_Put_Line ("The airbag is: ");
      AS_Put_Line (Status_Airbag_System_String (Output.isActivated));

      --if the system is activated,
      --exiting the program
      --otherwise asking "try again"
      if Output.isActivatedBool = False then
         loop
            AS_Put ("Do you want to try again (y/n)? ");
            AS_Get_Line (User_Input, Last);
            exit when Last > 0;
            AS_Put_Line ("Please enter a non-empty string");
         end loop;
         exit when User_Input (1 .. 1) = "n";
      else
         exit;
      end if;

   end loop;
end Main;
