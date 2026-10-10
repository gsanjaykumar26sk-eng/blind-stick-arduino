#  Smart Blind Stick — Arduino Nano

Obstacle detection aid for visually impaired users using Arduino Nano and an HC-SR04 ultrasonic sensor.

---

##  How It Works

- HC-SR04 sensor measures distance to obstacles continuously
- Obstacle within **50cm** → buzzer activates
- Obstacle within **20cm** → vibration motor also activates
- Polls every 100ms for real-time response

---

##  Components

| Component | Purpose |
|-----------|---------|
| Arduino Nano | Microcontroller |
| HC-SR04 | Ultrasonic distance sensing |
| Active Buzzer | Audio alert |
| Vibration Motor | Tactile alert |
| 9V Battery | Power supply |

---

##  Wiring

```
HC-SR04 VCC  → 5V
HC-SR04 GND  → GND
HC-SR04 TRIG → D9
HC-SR04 ECHO → D10
Buzzer (+)   → D7
Motor (+)    → D6
```

---

##  Code

See `blind_stick.ino` for the full Arduino sketch.

---

##  Author

**Sanjay Kumar G** | B.Tech EEE, VIT Chennai  
[GitHub](https://github.com/gsanjaykumar26sk-eng)
