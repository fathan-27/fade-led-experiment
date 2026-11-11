////////////////
// LED memudar//
//============//
// Fade LED   //
////////////////

// Status: Selesai
// Waktu: 09/11/2026
// Pembuat: Fathan-27

// Siapa pun yang menggunakan kode ini, cobalah untuk memodifikasinya.
// Jangan terpaku pada kode templat agar kemampuan kalian terus berkembang.

// CATATAN:
// - Menggunakan LED merah (tegangan maju sekitar 1,7–2,1 volt).
// - Papan: Arduino UNO R3.
// - Nilai PWM Arduino UNO berada pada rentang 0–255 dan mengatur Duty Cycle.

// Variabel
const byte led_pin = 9; // Pin PWM untuk LED
const byte analog_value1 = 87; // Batas bawah nilai PWM
const byte analog_value2 = 107; // Batas atas nilai PWM

const char up = 1; // Arah naik
const char down = -1; // Arah turun

byte current_value = analog_value1; // Nilai PWM saat ini
char direction = up; // Arah perubahan nilai

// Persiapan
void setup() {
    pinMode(led_pin, OUTPUT);
}

// Perulangan
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
