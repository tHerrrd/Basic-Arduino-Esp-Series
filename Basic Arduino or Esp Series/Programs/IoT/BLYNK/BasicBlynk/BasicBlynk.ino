#define BLYNK_TEMPLATE_ID "TMPL6khi_kPpo"
#define BLYNK_TEMPLATE_NAME "Ther"
#define BLYNK_AUTH_TOKEN "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

constexpr char* ssid = "Samsung";
constexpr char* pass = "12345678"; // password disarankan hanya angka seperti contoh / tidak aneh aneh agar mudah terkoneksi
constexpr char* auth = "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei";

int led = 2 ;
int Vbutton = 0;

BLYNK_WRITE(V0)
{
  Vbutton = param.asInt(); // assigning incoming value from pin V0 to a variable
}

void setup()
{
  Blynk.begin(auth, ssid, pass); //Biar blynk tau mana yg di akses
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
  Blynk.run(); // menjaga koneksi antara microcontroler dengan blynk agar tetap stabl
}

