#define BLYNK_TEMPLATE_ID "TMPL6khi_kPpo"
#define BLYNK_TEMPLATE_NAME "Ther"
#define BLYNK_AUTH_TOKEN "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

constexpr char* ssid = "Samsung";
constexpr char* pass = "12345678"; // password disarankan hanya angka seperti contoh / tidak aneh aneh agar mudah terkoneksi
constexpr char* auth = "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei";

int LED = 2 ;
int vib = 4 ;


BLYNK_WRITE(V6)
{
  int vib = param.asInt(); // send temperature to Blynk App
}

void setup()
{
  Blynk.begin(auth, ssid, pass); //Biar blynk tau mana yg di akses
  pinMode(vib, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if(digitalRead(vib) == HIGH)
  {
    Blynk.virtualWrite(V6, LOW);
    digitalWrite(LED, HIGH);
  }
  else
  {
    Blynk.virtualWrite(V6, HIGH);
    digitalWrite(LED, LOW );
  }
  Blynk.run(); // menjaga koneksi antara microcontroler dengan blynk agar tetap stabl
}

