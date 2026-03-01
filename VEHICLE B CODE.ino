#include <WiFi.h>
#include <esp_now.h>
#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

// Pins
#define TRIG 5
#define ECHO 18
#define BUZZER 19
#define LED 2
#define BUTTON 4

// Peer MAC (Vehicle A)
uint8_t peerAddress[] = {0x24, 0x6F, 0x28, 0xDD, 0xEE, 0xFF};

typedef struct struct_message {
  float distance;
  float accel;
  bool brake;
  bool accident;
  bool emergency;
} struct_message;

struct_message outgoingData;

void setup() {
  Serial.begin(115200);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);

  Wire.begin();
  mpu.initialize();

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP NOW Error");
    return;
  }

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, peerAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  esp_now_add_peer(&peerInfo);
}

float getDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);
  float distance = duration * 0.034 / 2;
  return distance;
}

void loop() {

  float distance = getDistance();

  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  float accel = ax / 16384.0;

  bool brake = abs(accel) > 1.2;
  bool accident = abs(accel) > 3.0;

  bool emergency = digitalRead(BUTTON) == LOW;

  outgoingData.distance = distance;
  outgoingData.accel = accel;
  outgoingData.brake = brake;
  outgoingData.accident = accident;
  outgoingData.emergency = emergency;

  esp_now_send(peerAddress, (uint8_t *)&outgoingData, sizeof(outgoingData));

  if (emergency) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
  }

  delay(200);
}
