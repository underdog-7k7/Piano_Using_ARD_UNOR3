int button1=2;
int button2=3;
int button3=4;
int button4=5;
int button5=6;
int button6=7;
int button7=8;
int buzzer=13;

void setup(){
  pinMode(button1,OUTPUT);
  pinMode(button2,OUTPUT);
  pinMode(button3,OUTPUT);
  pinMode(button4,OUTPUT);
  pinMode(button5,OUTPUT);
  pinMode(button6,OUTPUT);
  pinMode(button7,OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop(){
  int b1=digitalRead(button1);
  int b2=digitalRead(button2);
  int b3=digitalRead(button3);
  int b4=digitalRead(button4);
  int b5=digitalRead(button5);
  int b6=digitalRead(button6);
  int b7=digitalRead(button7);
  
  if(b1==1){
    tone(buzzer,100,50);}
  if(b2==1){
    tone(buzzer,200,50);}
  if(b3==1){
    tone(buzzer,300,50);}
  if(b4==1){
    tone(buzzer,400,50);}
  if(b5==1){
    tone(buzzer,500,50);}
  if(b6==1){
    tone(buzzer,600,50);}
  if(b7==1){
    tone(buzzer,700,50);}
  delay(10);
}
