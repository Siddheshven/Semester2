int f = 13;
int g = 12;
int e = 11;
int d = 10;
int c = 9;
int b = 8;
int a = 7;
int buttonpin=5;
int buttonstate=0;
int p =0;
int de = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);

  pinMode(buttonpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate=digitalRead(buttonpin);
  if(buttonstate=HIGH)
  {
    p++;
    delay(100);
  }
  if(p==0)
  {
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(de); //0
  }
  if(p==1)
  {
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(de); //1
  }
  if(p==2)
  {
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(de); //2
  }
  if(p==3)
  {
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(de); //3
  }
  if(p==4)
  {
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(de); //4
  }
  if(p==5)
  {
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(de); //5
  }
  if(p==6)
  {
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(de); //6
  }
  if(p==7)
  {
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(de); //7
  }
  if(p==8)
  {
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(de); //8
  }
  if(p==9)
  {
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(de); //9
  }
}
