pragma SPARK_Mode;

package AirbagDeployment is

   subtype SpeedNumber is Integer range 0 .. 250;
   subtype TimeNumber is Integer range 1 .. 120;
   subtype WeightNumber is Integer range 0 .. 200;

   type Status_Airbag_Activation is (Activated, Not_Activated);

   type InputRecord is record
      User_Input_Speed : SpeedNumber;
      User_Input_Time  : TimeNumber;

   end record;

   type OutputRecord is record
      isActivated     : Status_Airbag_Activation;
      isActivatedBool : Boolean;
   end record;

   procedure deployAirbag
     (User_Input_Weight : in     WeightNumber; Dec : in Integer;
      O                 :    out OutputRecord) with
      Depends => (O => (Dec, User_Input_Weight)),
      Pre     => (User_Input_Weight >= 0 and User_Input_Weight <= 200),
         Post => (if (User_Input_Weight < 20) then O.isActivated = Not_Activated and O.isActivatedBool = False
                    elsif (User_Input_Weight > 20) and (Dec < -50) then O.isActivated = Activated and O.isActivatedBool
         else (O.isActivated = Not_Activated and O.isActivatedBool = False));

   function deceleration
     (Speed : in SpeedNumber; Time : in TimeNumber) return Integer with
     Depends => (deceleration'Result => (Speed, Time)),
       Pre     =>
       (Time > 0 and Time <= 120 and Speed >= 0 and Speed <=270),
         Post => (((0 - Speed) / Time) = deceleration'Result);

   function Status_Airbag_System_String
     (Status_Airbag_System : Status_Airbag_Activation) return String with
      Depends =>
       (Status_Airbag_System_String'Result => (Status_Airbag_System)),
         Post => (if (Status_Airbag_System = Activated)
	 then Status_Airbag_System_String'Result = "Activated"
	 else (Status_Airbag_System_String'Result = "Not Activated"));

end AirbagDeployment;
