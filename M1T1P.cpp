// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode (5, INPUT);
  Serial.begin(9600);
}

void loop()
{
	if(digitalRead(5))
    	{
         digitalWrite(11, HIGH); //LED would start to glow
         Serial.println("Motion is detected!"); //Prints this message
     	}
  	else
    	{
      	 digitalWrite(11, LOW); //LED would not glow
      	 Serial.println("Motion is not detected"); //Prints this message
    	}
  	delay(1000);
}
