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

int tick;
  void stall()
  {
    
      analogWrite(m1_l,0);
      analogWrite(m2_l,0);
      analogWrite(m3_l,0);
      analogWrite(m4_l,0);
      analogWrite(m1_r,0);
      analogWrite(m2_r,0);
      analogWrite(m3_r,0);
      analogWrite(m4_r,0);
  }

void drive_setap ()
{
  pinMode(m1_r,OUTPUT);
  pinMode(m1_l,OUTPUT);
  pinMode(m2_r,OUTPUT);
  pinMode(m2_l,OUTPUT);
  pinMode(m3_r,OUTPUT);
  pinMode(m3_l,OUTPUT);
  pinMode(m4_r,OUTPUT);
  pinMode(m4_l,OUTPUT);
  stall();
	
}
int speed_scalar (int speeed)
  {
      int sped_real=map(speeed,1,10000,1,255);
      return sped_real;
       
  }
  
  void left(int sp)
  {
    int www=speed_scalar(sp);
      analogWrite(m1_l,www);
      analogWrite(m2_l,www);
      analogWrite(m3_r,www);
      analogWrite(m4_r,www);
  }
  
      void right(int sp4)
  {
    int www=speed_scalar(sp4);
      analogWrite(m1_r,www);
      analogWrite(m2_r,www);
      analogWrite(m3_l,www);
      analogWrite(m4_l,www);
  }
  
  void forward(int sp)
  {
    int ww=speed_scalar(sp);
      analogWrite(m1_r,ww);
      analogWrite(m2_r,ww);
      analogWrite(m3_r,ww);
      analogWrite(m4_r,ww);
  }

  void backward(int sp1)
  {
    int ww=speed_scalar(sp1);
      analogWrite(m1_l,ww);
      analogWrite(m2_l,ww);
      analogWrite(m3_l,ww);
      analogWrite(m4_l,ww);
  }
    


