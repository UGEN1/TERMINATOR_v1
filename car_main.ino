#include <SoftwareSerial.h>
#include "drive.h"
#define m1_r 8
#define m1_l 9
#define m2_r 10
#define m2_l 11
#define m3_r 4
#define m3_l 5
#define m4_r 6
#define m4_l 7
#define res 13
#define trans 12




SoftwareSerial Blutus (res,trans);
int bt_input;
int move_status;

void setup() {
  Serial.begin(9600);
  Blutus.begin(9600);

  Blutus.println ("AT+NAMECYBERTRON666");
  drive_setap(); 

             }

  
void loop() {
  

if (Blutus.available()>0)
{
  
  
  bt_input = (int)Blutus.read();
 
  
  Serial.println(bt_input);
 if((bt_input>=10)&&(bt_input<50))
 {
  forward (bt_input*160);
 }

 else if ((bt_input>51)&&(bt_input<99))
 {
  backward (bt_input*80);
 }
  else if ((bt_input>100)&&(bt_input<150))
 {
  left (bt_input*40);

 }
   else if ((bt_input>151)&&(bt_input<200))
 {
  right (bt_input*35);

 }
   else if ((bt_input=2)||(bt_input=51)||(bt_input=100)||(bt_input=151))
 {
  stall();
 }
    
 
  
}
}
