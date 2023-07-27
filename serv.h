#include <Servo.h>
Servo servo1;
Servo servo2;
#define m1 9
#define m2 10
#define set 90
#define res 5
#define trans 4
int move_status;
int servo1_set = set;                                            
int servo2_set = set;
int tick;


void serv_setap ()
{
  servo1.attach (m1);
  servo2.attach (m2);
  servo1.write (set);
  servo2.write (set);
	
}
int Move_main (int ticker, int servo1_zad, int servo2_zad)
 {
  if (millis()-tick>=ticker)
  {
    if (servo1_set<servo1_zad)
    do{
    servo1_set++;
    }while (servo1_set<servo1_zad);
    if (servo1_set>servo1_zad) 
    do {
    servo1_set--;
    }while (servo1_set>servo1_zad);
    if (servo2_set<servo2_zad) 
    do{
    servo2_set++;
    }while (servo2_set<servo2_zad) ;
    if (servo2_set>servo2_zad)
    do{
    servo2_set--;
    } while (servo2_set>servo2_zad);
      servo1.write (servo1_set);
      servo2.write (servo2_set);
     tick=millis();
  }
 }
 
int Move_1 (int ticker, int servo1_zad)
 {
  if (millis()-tick>=ticker)
  {
    if (servo1_set<servo1_zad)
    do{
    servo1_set++;
    }while (servo1_set<servo1_zad);
    if (servo1_set>servo1_zad) 
    do {
    servo1_set--;
    }while (servo1_set>servo1_zad);
    
      servo1.write (servo1_set);
      tick=millis();
  }
 }
 
int Move_2 (int ticker,  int servo2_zad)
 {
  if (millis()-tick>=ticker)
  {
    
    if (servo2_set<servo2_zad) 
    do{
    servo2_set++;
    }while (servo2_set<servo2_zad) ;
    if (servo2_set>servo2_zad)
    do{
    servo2_set--;
    } while (servo2_set>servo2_zad);
     servo2.write (servo2_set);
     tick=millis();
  }
 }

