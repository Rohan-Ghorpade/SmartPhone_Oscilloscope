#include <LiquidCrystal.h>

// LCD pins: RS, EN, D4, D5, D6, D7 (customize as per your connection)
LiquidCrystal lcd(14, 15, 4, 3, 6, 7);  

// Rotary encoder pins
const int encoderPinA = 10;
const int encoderPinB = 11;

// Output Pins
const int squareWavePin = 9;   // Square wave output
const int sineWavePin = 5;     // SPWM pin

volatile int encoderPos = 0;
int lastEncoded = 0;

int frequency = 1000; // Default frequency (Hz)
unsigned long lastUpdate = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Waveform Gen");

  pinMode(encoderPinA, INPUT_PULLUP);
  pinMode(encoderPinB, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(encoderPinA), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(encoderPinB), updateEncoder, CHANGE);

  pinMode(squareWavePin, OUTPUT);
  pinMode(sineWavePin, OUTPUT);
}

void loop() {
  unsigned long now = millis();
  if (now - lastUpdate > 300) {
    lastUpdate = now;
    frequency = constrain(encoderPos * 10, 100, 5000); // Map encoder to frequency
    lcd.setCursor(0, 1);
    lcd.print("Freq: ");
    lcd.print(frequency);
    lcd.print(" Hz ");

    generateSquareWave(frequency);
    generateSineWave(frequency);
  }
}

// Interrupt function for rotary encoder
void updateEncoder() {
  int MSB = digitalRead(encoderPinA);
  int LSB = digitalRead(encoderPinB);

  int encoded = (MSB << 1) | LSB;
  int sum = (lastEncoded << 2) | encoded;

  if (sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011)
    encoderPos++;
  if (sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000)
    encoderPos--;

  lastEncoded = encoded;
}

// Square wave using `tone()` function
void generateSquareWave(int freq) {
  tone(squareWavePin, freq);
}

// Simulated sine wave using SPWM (simplified)
void generateSineWave(int freq) {
  int delayTime = 1000000 / freq / 50; // 50 steps per cycle
  for (int i = 0; i < 50; i++) {
    int pwmVal = 128 + 127 * sin(2 * 3.14159 * i / 50);
    analogWrite(sineWavePin, pwmVal);
    delayMicroseconds(delayTime);
  }
}
