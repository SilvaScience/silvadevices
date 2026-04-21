void setup() {
  // initialize digital pin A0, A1 an A2 as an OUTPUT.
  pinMode(A0, OUTPUT);pinMode(A1, OUTPUT);pinMode(A2, OUTPUT);
}

void loop() {
  // laser will turn on and off each 3 sec.
   digitalWrite(A0, HIGH);
   delay(1000);
   digitalWrite(A1, HIGH);
   delay(1000);
   digitalWrite(A2, HIGH);
   delay(1000);
   digitalWrite(A0, LOW);
   delay(1000);
   digitalWrite(A1, LOW);
   delay(1000);
   digitalWrite(A2, LOW);
   delay(1000);
}