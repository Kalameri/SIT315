// C++ code
//
const uint8_t led_pin = 9;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int sensorValue = analogRead(A0);
  digitalWrite(led_pin, HIGH);
  delay(1000);
  digitalWrite(led_pin, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  Serial.println(sensorValue);
  interrupts();
  delay(1000);
}