
void setup() {

  Serial.begin(9600);
  Serial.println("Hello World!");
}

// the loop routine runs over and over again forever:
void loop() {
    // wait for a second
    delay(1000);
    // print hello world
    Serial.println("Hello World!");
}