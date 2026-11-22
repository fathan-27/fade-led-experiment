// Information
// Name: Fade LED Experiment
// Status: Completed
// Version: 1.0 (22/11/2026)
// Github Repository: https://github.com/fathan-arsyad/fade-led-experiment.git 

// NOTE:
// - Anyone using this code should try to modify it.
// - Don't rely on templates or other people's code to keep your skills growing.

// Variabel
const byte led_pin = 9;
const byte analog_value1 = 0;
const byte analog_value2 = 95;
const char up = 10;
const char down = -10;
byte current_value = analog_value1;
char direction;

// Setup
void setup() {
    Serial.begin(115200); // IMPORTANT: make sure the Baud Rate setting in the serial monitor is same as the value in the code
    pinMode(led_pin, OUTPUT);
}

// Loop
void loop() {
    Serial.println("Current value = " + (current_value));

    analogWrite(led_pin, current_value);

    if (current_value <= analog_value1) {
        direction = up;
    } else if (current_value >= analog_value2) {
        direction = down;
    }

    current_value = current_value += direction;
    delay(35);
}
