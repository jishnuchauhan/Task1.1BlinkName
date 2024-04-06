const int ledPin = LED_BUILTIN; // Set the built-in LED pin

// Define Morse code sequences for each letter
const String morseJ = ".---";
const String morseI = "..";
const String morseS = "...";
const String morseH = "....";
const String morseN = "-.";
const String morseU = "..-";

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop() {
  blinkMorse(morseJ);
  blinkMorse(morseI);
  blinkMorse(morseS);
  blinkMorse(morseH);
  blinkMorse(morseN);
  blinkMorse(morseU);
}

void blinkMorse(String morseCode) {
  for (int i = 0; i < morseCode.length(); i++) {
    char symbol = morseCode.charAt(i);
    if (symbol == '.') {
      dot();
    } else if (symbol == '-') {
      dash();
    }
    delay(100); // Adjust delay as needed
  }
  delay(200); // Pause between letters
}

void dot() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(100); // Length of dot
  digitalWrite(ledPin, LOW); // Turn off the LED
}

void dash() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(300); // Length of dash
  digitalWrite(ledPin, LOW); // Turn off the LED
}
