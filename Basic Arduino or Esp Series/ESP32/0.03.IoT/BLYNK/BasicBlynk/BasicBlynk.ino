//--------->Code Project in Blynk<---------
#define BLYNK_TEMPLATE_ID "TMPL6khi_kPpo"
#define BLYNK_TEMPLATE_NAME "Ther"
#define BLYNK_AUTH_TOKEN "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei"

//--------->Your Microcontroller(below for esp32)<---------
#include <WiFi.h> //---------> for esp8266 <ESP8266WiFi.h>
#include <BlynkSimpleEsp32.h> //---------> for esp8266 <BlynkSimpleEsp8266.h>

constexpr char* ssid = "Samsung"; // change it according to your connection
constexpr char* pass = "12345678"; // It is recommended that the password only be numbers as in the example / not strange so that it is easy to connect
constexpr char* auth = "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei"; //match the code above

int led = 2 ;     
int Vbutton = 0; //------->Variable Virtual Buttonn Blynk

BLYNK_WRITE(V0)
{
  Vbutton = param.asInt(); // Variable from virtual button
}

void setup()
{
  Blynk.begin(auth, ssid, pass); 
  pinMode(led, OUTPUT);           
}

void loop()
{
  if(Vbutton == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(80);
    digitalWrite(led, LOW);
    delay(80);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  Blynk.run(); 
}