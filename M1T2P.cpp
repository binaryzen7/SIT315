// C++ code
//
const uint8_t DATA_PIN = 2;
const uint8_t LED = 11;

uint8_t sensorState = LOW;
uint8_t ledState = LOW;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode (DATA_PIN, INPUT_PULLUP);
  attachInterrupt(0, code, CHANGE);
  Serial.begin(9600);
}

void loop()
{
//
}

void code()
{
  sensorState = digitalRead(2);
  if(sensorState == HIGH)
  {
    ledState = HIGH;
    Serial.println("Motion Detected");
    digitalWrite(11, sensorState);
  }
  
  else
  {
    Serial.println("Motion not detected");
    digitalWrite(11, sensorState);
  }
  
}
