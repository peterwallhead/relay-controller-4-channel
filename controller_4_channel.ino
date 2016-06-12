int inputChannel1 = 2;
int inputChannel2 = 3;
int inputChannel3 = 4;
int inputChannel4 = 5;

int outputChannel1 = 6; //Up
int outputChannel2 = 7; //Down
int outputChannel3 = 8; //Left
int outputChannel4 = 9; //Right

//Set initial INPUT pin states
int inputChannel1State = LOW;
int inputChannel2State = LOW;
int inputChannel3State = LOW;
int inputChannel4State = LOW;

void setup() {
  //Set INPUT pins
  int inputPinN;
  for(inputPinN=2; inputPinN<=5; inputPinN++) {
      pinMode(inputPinN, INPUT);
  }

  //Set OUTPUT pins
  int outputPinN;
  for(outputPinN=6; outputPinN<=9; outputPinN++) {
      pinMode(outputPinN, OUTPUT);
  } 
}

void loop() {
  //Read INPUT pin states
  inputChannel1State = digitalRead(inputChannel1);
  inputChannel2State = digitalRead(inputChannel2);
  inputChannel3State = digitalRead(inputChannel3);
  inputChannel4State = digitalRead(inputChannel4);

  //Write inputChannel state to OUTPUT pins
  digitalWrite(outputChannel1, inputChannel1State);
  digitalWrite(outputChannel2, inputChannel2State);
  digitalWrite(outputChannel3, inputChannel3State);
  digitalWrite(outputChannel4, inputChannel4State);
}

