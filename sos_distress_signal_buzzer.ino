// ──────────────────────────────────────────────────────────
// Project 2 variant: S.O.S Distress Signal
// In Morse code: S = 3 dots (short blinks), O = 3 dashes (long blinks)
// ──────────────────────────────────────────────────────────
int ledPin = 10;
int buzzer = 9;
// We declare a variable called ledPin and assign it the value 10; and a variable called buzzer and assign it the value 9
// This means the LED is connected to digital pin number 10 and the buzzer is connected to the pin number 9 on the Arduino.

///////////////////////////////////////////////
////////////////
//The function dot() is used to create a short blink for the led  and a make the buzzer sound
//it allows the letter "S" to be represented
void dot(int nb)
{
  // the variable nb is used to show how many times the instruction will be repeted
  for (int x = 0; x < nb; x++)
  {
 // This for loop repeats the block inside {} exactly nb times.
 // x starts at 0, increases by 1 each time, stops when x reaches nb.
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzer, HIGH);
 // HIGH sends 5V to pin 10, which turns the LED ON.
  delay(150);
 // The Arduino waits 150 milliseconds (0.15 seconds) — a short blink.
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzer, LOW);
 // LOW sends 0V to pin 10, which turns the LED OFF.
  delay(100);
 // Wait 100ms between each blink.
  }
}

/////////////////////////////////////////////////
////////////////////////////////////////////
//The function dash() is used to create a short blink for the led  and a make the buzzer sound
//it allows the letter "O" to be represented
void dash(int nb){
  for (int x = 0; x < nb; x++) 
 {
 digitalWrite(ledPin, HIGH);
 digitalWrite(buzzer, HIGH);
 delay(400);
 // 400 milliseconds is a LONG blink — this represents a dash.
 digitalWrite(ledPin, LOW);
 digitalWrite(buzzer, LOW);
 delay(100);
 }
}



void setup() {
 // setup() runs once when the Arduino is powered on or reset.
 pinMode(ledPin, OUTPUT);
 pinMode(buzzer, OUTPUT);
 // This tells the Arduino that pin 10 will send electricity (OUTPUT),
 // not receive it (INPUT). Without this line, the LED will not work.
}
void loop() {
 // loop() runs forever, repeating from top to bottom continuously.
 // ── Letter S : 3 short blinks (dots) ──────────
 dot(3);
 //dot(3) is used to call the function named dot() and pass the value 3 as an argument
 delay(100);
 // 100ms pause between letters S and O.
 // ── Letter O : 3 long blinks (dashes) ──────────
 dash(3);

 //dash(3) is used to call the function dash() and pass the value 3 as an argument 
 delay(100);
 // 100ms pause between letters O and S.
 // ── Letter S again : 3 short blinks ────────────
 dot(3);
 delay(5000);
 // Wait 5 seconds before repeating the whole S.O.S sequence.
}


/*We wrote this code to make the buzzer sound in parallel with the LED during the blinds.
 In this code, we created two new functions dot_buzz() and dash_buzz() to make the buzzer 
 sound in parallel with the LED. But while writing the code, we had to call dot_buzz(3) 
 after dot(3) as well as dash_buzz(3) after dash(3), which caused the lamp to finish 
 blinking before the buzzer sounded, and since we couldn't find a solution, we chose 
 a different approach. 
 
──────────────────────────────────────────────────────────
// Project 2 : S.O.S Distress Signal
// In Morse code: S = 3 dots (short blinks), O = 3 dashes (long blinks)
// We use a for loop to avoid repeating the same lines 3 times
// ──────────────────────────────────────────────────────────
int ledPin = 10;
int buzzer = 9;
// We declare a variable called ledPin and assign it the value 10.
// This means the LED is connected to digital pin number 10 on the Arduino.
// Using a variable instead of writing 10 directly everywhere is better:
// if you later change the pin, you only change it in one place.

///////////////////////////////////////////////
////////////////
//The function dot() is used to create a short blink and allows the letter "S" to be represented
void dot(int nb)
{
  for (int x = 0; x < nb; x++)
  {
 // This for loop repeats the block inside {} exactly 3 times.
 // x starts at 0, increases by 1 each time, stops when x reaches 3.
  digitalWrite(ledPin, HIGH);
 // HIGH sends 5V to pin 10, which turns the LED ON.
  delay(150);
 // The Arduino waits 150 milliseconds (0.15 seconds) — a short blink.
  digitalWrite(ledPin, LOW);
 // LOW sends 0V to pin 10, which turns the LED OFF.
  delay(100);
 // Wait 100ms between each blink.
  }
}
void dot_buzz(int nb)
{
  for (int x = 0; x < nb; x++)
  {
 // This for loop repeats the block inside {} exactly 3 times.
 // x starts at 0, increases by 1 each time, stops when x reaches 3.
  digitalWrite(buzzer, HIGH);
 // HIGH sends 5V to pin 10, which turns the LED ON.
  delay(150);
 // The Arduino waits 150 milliseconds (0.15 seconds) — a short blink.
  digitalWrite(buzzer, LOW);
 // LOW sends 0V to pin 10, which turns the LED OFF.
  delay(100);
 // Wait 100ms between each blink.
  }
}
/////////////////////////////////////////////////
////////////////////////////////////////////
//The function dash() is used to create a short blink and allows the letter "O" to be represented
void dash(int nb){
  for (int x = 0; x < nb; x++) 
 {
 digitalWrite(ledPin, HIGH);
 delay(400);
 // 400 milliseconds is a LONG blink — this represents a dash.
 digitalWrite(ledPin, LOW);
 delay(100);
 }
}
void dash_buzz(int nb){
  for (int x = 0; x < nb; x++) 
 {
 digitalWrite(buzzer, HIGH);
 delay(400);
 // 400 milliseconds is a LONG blink — this represents a dash.
 digitalWrite(buzzer, LOW);
 delay(100);
 }
}


// We declare a variable called ledPin and assign it the value 10.
// This means the LED is connected to digital pin number 10 on the Arduino.
// Using a variable instead of writing 10 directly everywhere is better:
// if you later change the pin, you only change it in one place.
void setup() {
 // setup() runs once when the Arduino is powered on or reset.
 pinMode(ledPin, OUTPUT);
 pinMode(buzzer, OUTPUT);
 // This tells the Arduino that pin 10 will send electricity (OUTPUT),
 // not receive it (INPUT). Without this line, the LED will not work.
}
void loop() {
 // loop() runs forever, repeating from top to bottom continuously.
 // ── Letter S : 3 short blinks (dots) ──────────
 dot(3);
 dot_buzz(3);
 //dot(3) is used to call the function dot() and specify the number of time the block of the for loop should be repeated
 delay(100);
 // 100ms pause between letters S and O.
 // ── Letter O : 3 long blinks (dashes) ──────────
 dash(3);
 dash_buzz(3);
 //dash(3) is used to call the function dash() and specify the number of time the block of the for loop should be repeated
 delay(100);
 // 100ms pause between letters O and S.
 // ── Letter S again : 3 short blinks ────────────
 dot(3);
 dot_buzz(3);
 delay(5000);
 // Wait 5 seconds before repeating the whole S.O.S sequence.
}
*/