#include <SoftwareSerial.h>

#include "serv.h"


SoftwareSerial Blutus (res,trans);
int bt_input;
int input;


void setup() {
  Serial.begin(9600);
  Blutus.begin(9600);
  serv_setap (); 
  Blutus.println ("AT+NAMECYBERTRONSERVO");
             }



  
void loop() {

if (Blutus.available()>0)
{
  bt_input = (int)Blutus.read();
int a=bt_input;
 //bt_input = (int)Blutus.read();
     Serial.print("a= ");
  Serial.println(a);
  if ((a>=30)&&(a<150))
  {
    bt_input = (int)Blutus.read();
    Move_1 (100,a);
  }
  else if ((a>=160)&&(a<250))
  {
    bt_input = (int)Blutus.read();
    Move_2 (100,a-120);
  }
      else if (a==252)
      {
    bt_input = (int)Blutus.read();
    Move_main (100,90,90);
      }
  
      
      }

}
