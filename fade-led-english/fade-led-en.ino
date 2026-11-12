////////////////
// LED memudar//
//============//
// Fade LED   //
////////////////

// Status: Completed
// Date: 11/09/2026
// Creator: fathan-27
// Github : https://github.com/fathan-27

// Anyone using this code should try to modify it.
// Don't rely on templates or other people's code to keep your skills growing.

// NOTE:
// - Uses a red LED (forward voltage around 1.7–2.1 volts).
// - The Arduino UNO PWM value ranges from 0–255 and controls the duty cycle.
// - For microcontrollers or other devices, please adjust accordingly.

// Variabel
const byte led_pin = 9; // PWM pin for LED
const byte analog_value1 = 87; // Lower limit of PWM value
const byte analog_value2 = 107; // Upper limit of PWM value

const char up = 1; // Upward direction
const char down = -1; // Down direction

byte current_value = analog_value1; // Current PWM value
char direction = up; // Direction of value change

// Preparation/Setyp
void setup() {
    pinMode(led_pin, OUTPUT);
}

// Looping
void loop() {
    analogWrite(led_pin, current_value);

    if (current_value <= analog_value1) {
        direction = up;
    } else if (current_value >= analog_value2) {
        direction = down;
    }

    current_value += direction;
}
```
