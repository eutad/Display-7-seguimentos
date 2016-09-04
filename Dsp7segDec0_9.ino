const int a7 = 7;
const int b6 = 6;
const int c4 = 4;
const int d2 = 2;
const int e1 = 1;
const int f9 = 9;
const int afgbedc8 = 8;
const int afgcd5 = 5;
const int afged3 = 3;


void setup() {              
pinMode(d2, OUTPUT); 
  pinMode(afged3, OUTPUT);
  pinMode(c4, OUTPUT);
  pinMode(afgcd5, OUTPUT);
  pinMode(b6, OUTPUT);
  pinMode(a7, OUTPUT);
  pinMode(afgbedc8, OUTPUT);
  pinMode(f9, OUTPUT);
  digitalWrite(f9, 0);
}

void loop() {
// Liga numero  '0'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   1);
 digitalWrite(b6,       1);
 digitalWrite(a7,       1);
 digitalWrite(afgbedc8, 0);
 delay(1000);
 // Liga numero  '1'
 digitalWrite(d2,       0);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   0);
 digitalWrite(b6,       0);
 digitalWrite(a7,       0);
 digitalWrite(afgbedc8, 0);
 delay(1000);
 // Liga numero  '2'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       0);
 digitalWrite(afgcd5,   1);
 digitalWrite(b6,       1);
 digitalWrite(a7,       0);
 digitalWrite(afgbedc8, 1);
 delay(1000);
 // Liga numero  '3'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   1);
 digitalWrite(b6,       0);
 digitalWrite(a7,       0);
 digitalWrite(afgbedc8, 1);
 delay(1000);
 // Liga numero  '4'
 digitalWrite(d2,       0);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   0);
 digitalWrite(b6,       0);
 digitalWrite(a7,       1);
 digitalWrite(afgbedc8, 1);
 delay(1000);
// Liga numero  '5'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   0);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   1);
 digitalWrite(b6,       0);
 digitalWrite(a7,       1);
 digitalWrite(afgbedc8, 1);
 delay(1000);
 // Liga numero  '6'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   0);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   1);
 digitalWrite(b6,       1);
 digitalWrite(a7,       1);
 digitalWrite(afgbedc8, 1);
 // Liga numero  '7'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   0);
 digitalWrite(b6,       0);
 digitalWrite(a7,       0);
 digitalWrite(afgbedc8, 0);
 delay(1000);
 // Liga numero  '8'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   1);
 digitalWrite(b6,       1);
 digitalWrite(a7,       1);
 digitalWrite(afgbedc8, 1);
 delay(1000);
 // Liga numero  '9'
 digitalWrite(d2,       1);
 digitalWrite(afged3,   1);
 digitalWrite(c4,       1);
 digitalWrite(afgcd5,   0);
 digitalWrite(b6,       0);
 digitalWrite(a7,       1);
 digitalWrite(afgbedc8, 1);
 delay(4000);
}
