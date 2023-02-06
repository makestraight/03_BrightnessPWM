/*
  LED brightness controlled by PWM

  Date: 6 Feb 2023
  Author: Yen-Chen Chang @ makestraight
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize PWM pin 9 as an output.
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //decrease the duty cycle from 100% (value=255) to 0% (value=0)
  for(int i = 255; i >= 0; i--){
    analogWrite(9, i);
    delay(20);
  }
  //increase the duty cycle from 0% (value=0) to 100% (value=255)
  for(int i = 0; i <= 255; i++){
    analogWrite(9, i);
    delay(20);
  }
}
