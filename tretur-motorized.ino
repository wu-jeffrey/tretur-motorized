#define IN3 5  // GPIO5 == D1
#define IN4 4  // GPIO4 == D2

void setup() {
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
}

void loop() {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(5000);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(5000);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(5000);
}
