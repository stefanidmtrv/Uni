#include "dotDevice.h"


const char* ssid = "NOWTVTVLYK";
const char* password = "hmmUwXL81gXC";
const char* server = "ws://ec2-52-15-138-171.us-east-2.compute.amazonaws.com:1234"; 

const char* gid = "pbEGMqBP";

dotDevice ddev(ssid, password, server);

String json_str;
String json_str2; 
String json_str3;
String json_str4;
String json_str5;
String json_str6;
String json_str7;
String json_str8;
String json_str9;
String json_str10;
String json_str11;
String json_str12;
String json_str13;
String json_str14;
String json_str15;
String json_str16;
String json_str17;
String json_str18;

void setup() {
  
    Serial.begin(115200);
    ddev.connect();
    
    json_str = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"SAY\", \"text\": \"Group 7!\"}";
    json_str2 = "{\"device\" : \""+String(gid)+"\", \"cmd\" : \"SIZE\", \"size\": 16 }";
    json_str3 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"COLOUR\", \"colour\": \"#12F57D\"}";
    json_str4 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"LOAD\"}";
    json_str5 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": 5}";
    json_str6 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": 5}";
    json_str7 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": -5}";
    json_str8 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": -5}";
    json_str9 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"RUN\"}";
    json_str10 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"HALT\"}";
    json_str11 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"LOAD\"}";
    json_str12 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_YPOS\", \"dy\": 5}";
    json_str13 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_YPOS\", \"dy\": 5}";
    json_str14 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_YPOS\", \"dy\": -5}";
    json_str15 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_YPOS\", \"dy\": -5}";
    json_str16 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"RUN\"}";
    json_str17 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"HALT\"}";
    json_str18 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"COLOUR\", \"colour\": \"#D612F5\"}";
    
}


void loop() {

    delay(3000);

    Serial.println(json_str);
    ddev.send(json_str);
    ddev.send(json_str2);
    ddev.send(json_str3);
    ddev.send(json_str4);
    ddev.send(json_str5);
    ddev.send(json_str6);
    ddev.send(json_str7);
    ddev.send(json_str8);
    ddev.send(json_str9);
    delay(2000);
    ddev.send(json_str10);
    ddev.send(json_str11);
    ddev.send(json_str12);
    ddev.send(json_str13);
    ddev.send(json_str14);
    ddev.send(json_str15);
    ddev.send(json_str16);
    delay(2000);
    ddev.send(json_str17);
    ddev.send(json_str18);

}
