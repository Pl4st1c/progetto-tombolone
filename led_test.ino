const int buttonPin = 2;
const int ledPin = 3;
int buttonState = 0;
//variabili globali
void setup() {
//indicazioni di chi è INPUT e chi è OUTPUT
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){ //se il pulsanteè HIGH
    digitalWrite(ledPin, HIGH); //accensione pin
  }
  else
  {
    digitalWrite(ledPin, LOW); //se non è stato cliccato allora il pin non si accende
  }
}
