#define led 7
#define sensor A0

int valorSensor;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  valorSensor = analogRead(sensor);
  Serial.print("Valor do sensor: ");
  Serial.println(valorSensor);
  if (valorSensor > 55) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
  delay(1000);
}
