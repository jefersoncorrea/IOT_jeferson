char nom[] = {'J', 'E', 'F', 'E', 'R'};

void setup() {
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int x;
  for (x = 0; x < 5; x = x + 1) {
    Serial.println(nom[x]);
    delay(9600);
  }
}
