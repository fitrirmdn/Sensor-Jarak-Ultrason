#include <LiquidCrystal.h>
#define trigger 8
#define echo 9
LiquidCrystal lcd(2,3,4,5,6,7);
float time=0,distance=0;

void setup()
{
lcd.begin(16,2);
pinMode(trigger,OUTPUT);
pinMode(echo,INPUT);
lcd.print("Pengukur Jarak");
lcd.setCursor(0,1);
lcd.print("Ultrasonic");
delay(1000);
lcd.clear();
lcd.print("FITRI RAMADHANI");
lcd.setCursor(0,1);
lcd.print("SMKN 2 SURABAYA");
delay(1000);
}
void loop()
{
lcd.clear();
digitalWrite(trigger,LOW);
delayMicroseconds(2);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);
delayMicroseconds(2);
time=pulseIn(echo,HIGH);
// distance=time*343.64/20000;
distance=(time/2)/28.5;
lcd.clear();
lcd.print("Jarak :");
lcd.print(distance);
lcd.print("cm");
lcd.setCursor(0,1);
lcd.print("Jarak :");
lcd.print(distance/100);
lcd.print("m");
delay(1000);
}