
/**************SCROLL MESSAGE ON LCD*************
 * This code Scrolls a 
 *  LCD code
 * It has 16 pins, with 16 columns and 2 rows
 * VSS- ground
 * VDD - Power Supply
 * VEE - Ground
 * RS - Pin 12
 * RW - Ground
 * E - Pin11
 * D0,D1,D2,D3 - No connection
 * D4- Pin 5
 * D5 - Pin 4
 * D6 - Pin 3
 * D7 - Pin 2
 */
 

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);


void setup() {
  lcd.begin(16,2);
}

int scroll(char text[]){
for(int i=0;i<(strlen(text))-2;i++){
   lcd.clear();
  for(int j=0;j<i;j++){
 
  lcd.setCursor(14-j,0);
  lcd.print(text[i-j]);

  
}
 delay(200) ;
}
  return 0;
}
void loop() {
char text[]=" This Program is made by Naman Gupta                 ";
scroll(text);
}
