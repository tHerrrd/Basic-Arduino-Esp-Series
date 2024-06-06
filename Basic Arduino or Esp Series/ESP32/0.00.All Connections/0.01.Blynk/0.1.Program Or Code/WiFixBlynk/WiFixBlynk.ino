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

bool deviceConnected = false; // initial condition of the device

void setup()
{
  Serial.begin(115200); // Set the baud rate as needed
  Blynk.begin(auth, ssid, pass); //so Blynk knows which ones to access
  
  //--------->Connect to WiFi<---------
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("WiFi connected!");
  deviceConnected = true; // Set the flag to true after successful connection
}

void loop()
{
  Blynk.run(); // keep the connection between the microcontroller and blynk stable
}

/*------How to check whether a device is connected or not?
1.Wifi? look in the serial monitor, if it doesn't say "Device Connected!" means not connected, and vice versa
2. Blinking? Look in the Blynk application if it says "Online" it means it's connected, if it's "offline" it's not 
*/

