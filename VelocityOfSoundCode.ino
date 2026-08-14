#include<LiquidCrystal_I2C.h>
#include<DHT.h>
DHT dht(4,DHT11);
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();
  pinMode(7,OUTPUT);
  pinMode(2,INPUT); 
}

void loop() {
  //DHT11
  float t= dht.readTemperature();

  //HCSRO4
  digitalWrite(7,LOW);
  delayMicroseconds(2);
  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  
  long time= pulseIn(2,HIGH,30000);
  float velocity = (2*29.3)/time;
  float v= velocity*10000.0;

  //LCD
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print("'C");
  lcd.setCursor(0,1);
  lcd.print("Speed:");
  lcd.print(v);
  lcd.print("m/s");
  delay(5000);
}
