#define IN1 25
#define IN2 26

#define PWM_FREQ 1000
#define PWM_RESOLUTION 8   // 0 a 255

void setup() {

  // Configuramos ambos pines como PWM
  ledcAttach(IN1, PWM_FREQ, PWM_RESOLUTION);
  ledcAttach(IN2, PWM_FREQ, PWM_RESOLUTION);

  // Motor detenido
  ledcWrite(IN1, 0);
  ledcWrite(IN2, 0);
}

void loop() {

  // ==========================================
  // SENTIDO 1
  // ==========================================

  // 25%
  ledcWrite(IN1, 64);
  ledcWrite(IN2, 0);
  delay(2000);

  // 50%
  ledcWrite(IN1, 128);
  delay(2000);

  // 75%
  ledcWrite(IN1, 191);
  delay(2000);

  // 100%
  ledcWrite(IN1, 255);
  delay(3000);

  // Frenar
  ledcWrite(IN1, 0);
  ledcWrite(IN2, 0);
  delay(2000);


  // ==========================================
  // SENTIDO 2
  // ==========================================

  // 25%
  ledcWrite(IN2, 64);
  ledcWrite(IN1, 0);
  delay(2000);

  // 50%
  ledcWrite(IN2, 128);
  delay(2000);

  // 75%
  ledcWrite(IN2, 191);
  delay(2000);

  // 100%
  ledcWrite(IN2, 255);
  delay(3000);

  // Frenar
  ledcWrite(IN1, 0);
  ledcWrite(IN2, 0);
  delay(3000);
}