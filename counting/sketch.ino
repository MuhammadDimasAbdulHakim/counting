int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int dg1=8;
int dg2=9;

void setup() {
  // put your setup code here, to run once:
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(dg1, OUTPUT);
pinMode(dg2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int n = 0; n <300; n++){
  dig2();
  number2();
  stop();
  dig1();
  number0();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number9();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number8();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number7();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number6();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number5();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number4();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number3();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number2();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number1();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number1();
  stop();
  dig1();
  number0();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number9();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number8();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number7();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number6();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number5();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number4();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number3();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number2();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number1();
  stop();
}
for (int n = 0; n <300; n++){
  dig2();
  number0();
  stop();
  dig1();
  number0();
  stop();
}
}
void number0(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void number1(){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void number2(){
       digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(g, LOW);
      digitalWrite(e, LOW);
      digitalWrite(d, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(f, HIGH);
}
void number3(){
       digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(g, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);

}
void number4(){
        digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
}
void number5(){
      digitalWrite(a, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(e, HIGH);
}
void number6(){
      digitalWrite(a, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(b, HIGH);
}
void number7(){
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

}
void number8(){
        digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
}
void number9(){
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(e, HIGH);
}
void dig1(){
  digitalWrite(dg1, LOW);
  digitalWrite(dg2, HIGH);
}
void dig2(){
  digitalWrite(dg1, HIGH);
  digitalWrite(dg2, LOW);

}
void stop(){
        digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
delay(1);
}

