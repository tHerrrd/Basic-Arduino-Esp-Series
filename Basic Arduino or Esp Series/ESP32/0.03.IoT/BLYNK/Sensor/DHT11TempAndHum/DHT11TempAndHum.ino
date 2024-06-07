#define BLYNK_TEMPLATE_ID "TMPL6khi_kPpo"
#define BLYNK_TEMPLATE_NAME "Ther"
#define BLYNK_AUTH_TOKEN "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei"

#include <WiFi.h>
#include <DHT.h>
#include <BlynkSimpleEsp32.h>

constexpr char* ssid = "Samsung";
constexpr char* pass = "12345678"; // password disarankan hanya angka seperti contoh / tidak aneh aneh agar mudah terkoneksi
constexpr char* auth = "QA03mZ7o1Ktg5udz8OY4WLEFwFhxZcei";


int sdht = 4 ;
constexpr int DHTTYPE = DHT11  ; 

float humidity, temp_c;
DHT dht(sdht, DHTTYPE);

BLYNK_WRITE(V3)
{
  Blynk.virtualWrite(V3, temp_c); // send temperature to Blynk App
}

BLYNK_WRITE(V4)
{
  Blynk.virtualWrite(V4, humidity); // send humidity to Blynk App
}

void setup()
{
  Blynk.begin(auth, ssid, pass); //Biar blynk tau mana yg di akses
  pinMode(sdht, INPUT);
  dht.begin();
}

void loop()
{
  Blynk.virtualWrite(V3, temp_c);
  Blynk.virtualWrite(V4, humidity);
  humidity = dht.readHumidity();
  temp_c = dht.readTemperature();
  Blynk.run(); // menjaga koneksi antara microcontroler dengan blynk agar tetap stabl
}

