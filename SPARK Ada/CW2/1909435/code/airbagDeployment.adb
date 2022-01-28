pragma SPARK_Mode;

package body AirbagDeployment is

   procedure deployAirbag
     (User_Input_Weight : in     WeightNumber; Dec : in Integer;
      O                 :    out OutputRecord)
   is
      minWeight : Integer;
      decValue  : Integer;
   begin
      minWeight := 20;
      decValue  := -50;

      if User_Input_Weight < minWeight then
         O.isActivated     := Not_Activated;
         O.isActivatedBool := False;
      elsif User_Input_Weight > minWeight and Dec < decValue then
         O.isActivated     := Activated;
         O.isActivatedBool := True;
      else
         O.isActivated     := Not_Activated;
         O.isActivatedBool := False;
      end if;

   end deployAirbag;

   function deceleration
     (Speed : in SpeedNumber; Time : in TimeNumber) return Integer
   is
      Dec : Integer;
   begin
      Dec := (0 - Speed) / Time;

      return Dec;
   end deceleration;

   function Status_Airbag_System_String
     (Status_Airbag_System : Status_Airbag_Activation) return String
   is
   begin

      if (Status_Airbag_System = Activated) then
         return "Activated";
      else
         return "Not Activated";
      end if;
   end Status_Airbag_System_String;

end AirbagDeployment;
