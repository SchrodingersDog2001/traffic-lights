// Traffic Light Simulator

int GreenLED=10;
int AmberLED=11;
int RedLED=12;

void setup() {
// Initialise PIN settings for LEDs:
pinMode(GreenLED,OUTPUT);
pinMode(AmberLED,OUTPUT);
pinMode(RedLED,OUTPUT);

// Initialise all LEDs to OFF to begin with: 
digitalWrite(GreenLED,LOW);
digitalWrite(AmberLED,LOW);
digitalWrite(RedLED,LOW);

// Initialise the SERIAL communication:
Serial.begin(9600);
}

void loop() {
// Yield mode:

digitalWrite(GreenLED,LOW);
digitalWrite(AmberLED,HIGH);
digitalWrite(RedLED,LOW);

Serial.println(" Lightmode : Yield ");
delay(1000);

// Go mode:

digitalWrite(GreenLED,HIGH);
digitalWrite(AmberLED,LOW);
digitalWrite(RedLED,LOW);

Serial.println(" Lightmode : Go ");
delay(2000);

// Stop mode:

digitalWrite(GreenLED,LOW);
digitalWrite(AmberLED,LOW);
digitalWrite(RedLED,HIGH);

Serial.println(" Lightmode : Stop ");
delay(2000);
}
