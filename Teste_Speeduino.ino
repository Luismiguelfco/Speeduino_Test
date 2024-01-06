#define inj_1 8
#define inj_2 9
#define inj_3 10
#define inj_4 11
#define inj_5 12
#define inj_6 46
#define HC2 4
#define Idle 5
#define HC1 6
#define Boost 7
#define FP 45
#define Fan 47
#define Tach 49
#define ign_1 40
#define ign_2 38
#define ign_3 52
#define ign_4 50
#define dig_in1 26
#define dig_in2 53
#define clutch 51



void setup() {
Serial.begin(115200);
pinMode (inj_1, OUTPUT);
pinMode (inj_2, OUTPUT);
pinMode (inj_3, OUTPUT);
pinMode (inj_4, OUTPUT);
pinMode (inj_5, OUTPUT);
pinMode (inj_6, OUTPUT);
pinMode (HC2, OUTPUT);
pinMode (Idle, OUTPUT);
pinMode (HC1, OUTPUT);
pinMode (Boost, OUTPUT);
pinMode (FP, OUTPUT);
pinMode (Fan, OUTPUT);
pinMode (Tach, OUTPUT);
pinMode (ign_1, OUTPUT);
pinMode (ign_2, OUTPUT);
pinMode (ign_3, OUTPUT);
pinMode (ign_4, OUTPUT);


}

void loop() {

  if(digitalRead(dig_in1) == HIGH || digitalRead(dig_in2) == HIGH || digitalRead(clutch) == LOW){
digitalWrite (inj_1, HIGH);
digitalWrite (inj_2, HIGH);
digitalWrite (inj_3, HIGH);
digitalWrite (inj_4, HIGH);
digitalWrite (inj_5, HIGH);
digitalWrite (inj_6, HIGH);
digitalWrite (HC2, HIGH);
digitalWrite (Idle, HIGH);
digitalWrite (HC1, HIGH);
digitalWrite (Boost, HIGH);
digitalWrite (FP, HIGH);
digitalWrite (Fan, HIGH);
digitalWrite (Tach, HIGH);
digitalWrite (ign_1, HIGH);
digitalWrite (ign_2, HIGH);
digitalWrite (ign_3, HIGH);
digitalWrite (ign_4, HIGH);
Serial.println("Clutch");

  } else{
digitalWrite (inj_1, HIGH);
digitalWrite (inj_2, HIGH);
digitalWrite (inj_3, HIGH);
digitalWrite (inj_4, HIGH);
digitalWrite (inj_5, HIGH);
digitalWrite (inj_6, HIGH);
digitalWrite (HC2, HIGH);
digitalWrite (Idle, HIGH);
digitalWrite (HC1, HIGH);
digitalWrite (Boost, HIGH);
digitalWrite (FP, HIGH);
digitalWrite (Fan, HIGH);
digitalWrite (Tach, HIGH);
digitalWrite (ign_1, HIGH);
digitalWrite (ign_2, HIGH);
digitalWrite (ign_3, HIGH);
digitalWrite (ign_4, HIGH);  

delay(100);

digitalWrite (inj_1, LOW);
digitalWrite (inj_2, LOW);
digitalWrite (inj_3, LOW);
digitalWrite (inj_4, LOW);
digitalWrite (inj_5, LOW);
digitalWrite (inj_6, LOW);
digitalWrite (HC2, LOW);
digitalWrite (Idle, LOW);
digitalWrite (HC1, LOW);
digitalWrite (Boost, LOW);
digitalWrite (FP, LOW);
digitalWrite (Fan, LOW);
digitalWrite (Tach, LOW);
digitalWrite (ign_1, LOW);
digitalWrite (ign_2, LOW);
digitalWrite (ign_3, LOW);
digitalWrite (ign_4, LOW);

delay(100);}


}
