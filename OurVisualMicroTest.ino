const int LED = 13;
int x = 0;

void setup()
{

	Serial.begin(9600);
	Serial.println("Welcome to VisualMicro Demo");
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LOW);

}

void loop()
{
	digitalWrite(LED, LOW);
	delay(2000);
	Serial.print("BREAKPOINT REACHED x = ");
	Serial.println(x);
	digitalWrite(LED, HIGH);
	delay(2000);
	x++;
	if (x > 10) {
		x = 0;
	}
}
