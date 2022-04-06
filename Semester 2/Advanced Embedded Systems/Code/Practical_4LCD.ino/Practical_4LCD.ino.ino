#include<LiquidCrystal.h>
const int rs = 12,en = 11,d4 = 5,d5 = 4,d6 = 3,d7 = 2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
/*VSS->GND,VDD->5V,VE->RESISTOR->GND,
RS->12,RW->GND,E->11,D4->5,D5->4,D6->3,D7->2,A->5V,K->GND*/
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(13,0);
  lcd.print("OK");
  lcd.setCursor(5,1);
  
    for(int thisChar = 0;thisChar < 10;thisChar++){
      lcd.print(thisChar);
      delay(500);
    }
}
