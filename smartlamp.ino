

#define BLYNK_TEMPLATE_ID "YOUR TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR TOKEN"



#define BLYNK_PRINT Serial
#define role1 D0


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char ssid[] = "Your WİFİ NAME " ;
char pass[] = "Your WİFİ PASS " ;


BLYNK_WRITE(V0){
  
  
  bool value1 = param.asInt();

  if (value1 == 1) {
    
    digitalWrite(role1 , HIGH);
    }
    
    else {
      
      digitalWrite(role1,LOW);
      }
  
  
  
  
  
  }


void setup()
{

  pinMode(role1, OUTPUT);
  digitalWrite(role1, HIGH);
  
  Serial.begin(115200);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);


  
}

void loop()
{
  Blynk.run();

}
