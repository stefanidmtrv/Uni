#include "dotDevice.h"


const char* ssid = "NOWTVTVLYK";
const char* password = "hmmUwXL81gXC";
const char* server = "ws://ec2-52-15-138-171.us-east-2.compute.amazonaws.com:1234"; 

const char* gid = "pbEGMqBP";

dotDevice ddev(ssid, password, server);

void setup() {
    Serial.begin(115200);
    ddev.connect();
}

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


void loop() {

    delay(3000);

    json_str = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"SAY\", \"text\": \"Group 7!\"}";
    json_str2 = "{\"device\" : \""+String(gid)+"\", \"cmd\" : \"SIZE\", \"size\": 16 }";
    json_str3 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"COLOUR\", \"colour\": \"#12F57D\"}";
    json_str4 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": 10}";
    json_str5 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": 10}";
    json_str6 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": -10}";
    json_str7 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"ADJUST_XPOS\", \"dx\": -10}";
    json_str8 = "{ \"device\" : \""+String(gid)+"\", \"cmd\" : \"COLOUR\", \"colour\": \"#D612F5\"}";

    Serial.println(json_str);
    ddev.send(json_str);
    ddev.send(json_str2);
    ddev.send(json_str3);
    ddev.send(json_str4);
    delay(200);
    ddev.send(json_str5);
    ddev.send(json_str6);
    ddev.send(json_str7);
    ddev.send(json_str8);


}
