// Eksempelkode, også tilgjengelig på https://github.com/LB4FH/robotbil
#include <Arduino.h>
#include <Servo.h>

// Definer porter
int enA = 3;   // Enable høyre motor
int enB = 6;   // Enable venstre motor
int pinRB = 4; // Bakover høyre motor
int pinRF = 2; // Fremover høre motor
int pinLB = 7; // Bakover venstre motor
int pinLF = 5; // Fremover venstr motor

// Denne kjøres første gang. Stiller alle porter til å være OUTPUT
void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(pinLB, OUTPUT);
  pinMode(pinLF, OUTPUT);
  pinMode(pinRB, OUTPUT);
  pinMode(pinRF, OUTPUT);
}

// Denne kjøres kontinuerlig
// Bilen kjører fremover i ett sekund, så står den stille i fem sekunder
void loop()
{
  // Hastighet 100 (0-255)
  analogWrite(enA, 100);
  analogWrite(enB, 100);

  // Skru på porter for de ulike motorene
  digitalWrite(pinLB, LOW);
  digitalWrite(pinLF, HIGH);
  digitalWrite(pinRB, LOW);
  digitalWrite(pinRF, HIGH);
  delay(1000);

  // Stopp alt
  digitalWrite(pinLB, LOW);
  digitalWrite(pinLF, LOW);
  digitalWrite(pinRB, LOW);
  digitalWrite(pinRF, LOW);
  delay(5000);
}
