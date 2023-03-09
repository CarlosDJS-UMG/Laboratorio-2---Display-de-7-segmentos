int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int pt = 9;
int b1 = 10;
int b2 = 11;
bool x1 = LOW;
bool x2 = LOW;
int ms;

void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(pt, OUTPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
}

void numero0() {
  digitalWrite(g, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero1() {
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(1000);
}
void numero2() {
  digitalWrite(g, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero3() {
  digitalWrite(g, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero4() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(1000);
}
void numero5() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero6() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero7() {
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero8() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero9() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}

void loop() {
  ms = Serial.read();
  x1 = digitalRead(b1);
  x2 = digitalRead(b2);
  digitalWrite(pt, LOW);
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, LOW);
  if (x1 == HIGH) {
    //numero 0
    numero0();
    //numero 1
    numero1();
    //numero 2
    numero2();
    //numero 3
    numero3();
    //numero 4
    numero4();
    //numero 5
    numero5();
    //nuemro 6
    numero6();
    //numero 7
    numero7();
    //numero 8
    numero8();
    //numero 9
    numero9();
  }

  if (x2 == HIGH) {
    //numero 9
    numero9();
    //numero 8
    numero8();
    //numero 7
    numero7();
    //nuemro 6
    numero6();
    //numero 5
    numero5();
    //numero 4
    numero4();
    //numero 3
    numero3();
    //numero 2
    numero2();
    //numero 1
    numero1();
    //numero 0
    numero0();
  }
  if (ms == '0') {
    numero0();
  }
  if (ms == '1') {
    numero1();
  }
  if (ms == '2') {
    numero2();
  }
  if (ms == '3') {
    numero3();
  }
  if (ms == '4') {
    numero4();
  }
  if (ms == '5') {
    numero5();
  }
  if (ms == '6') {
    numero6();
  }
  if (ms == '7') {
    numero7();
  }
  if (ms == '8') {
    numero8();
  }
  if (ms == '9') {
    numero9();
  }
}
