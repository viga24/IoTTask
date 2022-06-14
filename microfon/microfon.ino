#include <M5Stack.h> // Library dari M5Stack
const int Analog = 36; // Inisialisasi Pin analog 
const int Digtal = 2; // Inisialisasi Pin digital 

//Void setup berfungsi untuk inisialisasi mode pin sebagai input dan output
void setup() {
// put your setup code here, to run once:
M5.begin(); // untuk membuka port data M5Stack untuk komunikasi M5Stack baik mengirim atau menerima data dari M5Stack
pinMode(Digtal, INPUT_PULLUP); // inisialisasi sebagai input dalam keadaan HIGH
dacWrite(25, 0); //sebagai Output
M5.Lcd.setCursor(100, 0, 4); // Untuk Mengatur tata letak Output pada LCD
M5.Lcd.print("MICROPHONE"); // Untuk Menampilkan Output pada LCD
}
uint16_t a_data;  //Untuk mengupload data
uint16_t d_data;  //Untuk mengupload data
// Merupakan Fungsi untuk perulangan 
void loop() {
// put your main code here, to run repeatedly:
a_data = analogRead(Analog); // Membaca data analaog
d_data = digitalRead(Digtal); // Membaca data digital
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); // Untuk mencetak data analog dan digital
M5.Lcd.setCursor(30, 120, 4); // Untuk Mengatur tata letak Output pada LCD
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); // Untuk Menampilkan Output pada LCD
delay(200); // Memberikan delay 200 milli sekon
}
