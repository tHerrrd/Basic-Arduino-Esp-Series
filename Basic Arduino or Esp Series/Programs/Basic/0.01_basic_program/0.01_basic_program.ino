//=========VARIABEL=============\\
/*---Menyimpan NILAI, pada seebuah NAMA---*/

int led = 2 ;                   /*(integer) biasa digunakan untuk deklarasi pin, spek (2bytes / 16 bits)
                                  && jika nilai mau di ubah sewaktu waktu*/

constexpr int led2 = 4 ;        //(constanta expression) opsi terbaik jika nilai sudah fix dan tidak akan di ubah*/
 

//=========PERINTAH=============\\
/*---Serba serbi perintah dan pernyataan---*/

void setup()                    //==WAJIB di setiap  program==, pembacaan sekali (pernyataan guna pin misalnya)  
{
  pinMode(led2, OUTPUT);
}

void loop()                     //==WAJIB di setiap program==, pembacaan berulang sampai device mati
{
  digitalWrite(led2, HIGH);     //(digitalWrite) untuk menulis peintah seperti (led, HIGH); --HIGH/1 adalah aktif dalam bahasa program
  delay(500);                   //Jedaa waktu untuk melanjutkan ke program berikutnya
  digitalWrite(led2, LOW);      //--LOW/0 adalah mati dalam bahasa program
  delay(500);
}
