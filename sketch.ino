/*************************************************************
  Smart Classroom with Blynk IoT
  ESP32 + DHT22 + PIR Sensors
*************************************************************/

//========== BLYNK ==========
#define BLYNK_TEMPLATE_ID "TMPL3igoJN-lj"
#define BLYNK_TEMPLATE_NAME "Smart Zonal Energy optimization"
#define BLYNK_AUTH_TOKEN "o4CfaWvBNIV7nsMR-jVI2GbKEpJOz_Dn"

//========== Libraries ==========
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "DHT.h"

//========== WiFi ==========
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

//==================== Pins ====================
#define PIR1 14
#define PIR2 27

#define LIGHT1 18
#define FAN1 19

#define LIGHT2 23
#define FAN2 25

#define ENTRY_BUTTON 32
#define EXIT_BUTTON 34

#define DHTPIN 4
#define DHTTYPE DHT22

#define VENTILATION_LED 26

//==================== Objects ====================
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

//==================== Variables ====================
int students = 0;

bool zone1Active = false;
bool zone2Active = false;
bool ventilationActive = false;

float temperature = 24.0;

bool prevEntryState = HIGH;
bool prevExitState = HIGH;

//==================== Energy ====================
const int lightPower = 15;     // Watts
const int fanPower = 60;       // Watts
const int ventPower = 40;      // Watts

const float supplyVoltage = 230.0;

//=====================================================
void sendToBlynk()
{
  int totalPower = 0;

  if (zone1Active)
    totalPower += lightPower + fanPower;

  if (zone2Active)
    totalPower += lightPower + fanPower;

  if (ventilationActive)
    totalPower += ventPower;

  float current = (float)totalPower / supplyVoltage;

  // Send values to Blynk
  Blynk.virtualWrite(V0, students);
  Blynk.virtualWrite(V1, temperature);
  Blynk.virtualWrite(V2, zone1Active ? 1 : 0);
  Blynk.virtualWrite(V3, zone2Active ? 1 : 0);
  Blynk.virtualWrite(V5, supplyVoltage);
  Blynk.virtualWrite(V6, current);
  Blynk.virtualWrite(V7, totalPower);

  // Serial Monitor
  Serial.println("==================================");
  Serial.print("Students     : ");
  Serial.println(students);

  Serial.print("Temperature  : ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Zone 1       : ");
  Serial.println(zone1Active ? "ON" : "OFF");

  Serial.print("Zone 2       : ");
  Serial.println(zone2Active ? "ON" : "OFF");

  Serial.print("Voltage      : ");
  Serial.print(supplyVoltage);
  Serial.println(" V");

  Serial.print("Current      : ");
  Serial.print(current, 2);
  Serial.println(" A");

  Serial.print("Power        : ");
  Serial.print(totalPower);
  Serial.println(" W");

  Serial.println("==================================");
}

//=====================================================
void setup()
{
  Serial.begin(115200);

  pinMode(PIR1, INPUT);
  pinMode(PIR2, INPUT);

  pinMode(LIGHT1, OUTPUT);
  pinMode(FAN1, OUTPUT);

  pinMode(LIGHT2, OUTPUT);
  pinMode(FAN2, OUTPUT);

  pinMode(ENTRY_BUTTON, INPUT_PULLUP);
  pinMode(EXIT_BUTTON, INPUT_PULLUP);

  pinMode(VENTILATION_LED, OUTPUT);

  dht.begin();

  Serial.println("Connecting to WiFi and Blynk...");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected!");

  timer.setInterval(1000L, sendToBlynk);
}

//=====================================================
void loop()
{
  Blynk.run();
  timer.run();

  // Entry Button
  bool entryState = digitalRead(ENTRY_BUTTON);

  if (entryState == LOW && prevEntryState == HIGH)
  {
    students++;
    Serial.println("Student Entered");
    delay(200);
  }

  prevEntryState = entryState;

  // Exit Button
  bool exitState = digitalRead(EXIT_BUTTON);

  if (exitState == LOW && prevExitState == HIGH)
  {
    if (students > 0)
      students--;

    Serial.println("Student Exited");
    delay(200);
  }

  prevExitState = exitState;

  // Read Sensors
  int motion1 = digitalRead(PIR1);
  int motion2 = digitalRead(PIR2);

  float temp = dht.readTemperature();

  if (!isnan(temp))
    temperature = temp;

  // Reset outputs
  zone1Active = false;
  zone2Active = false;
  ventilationActive = false;

  if (students > 0)
  {
    if (motion1 == HIGH)
      zone1Active = true;

    if (motion2 == HIGH)
      zone2Active = true;

    if (zone1Active || zone2Active)
      ventilationActive = true;
  }

  // Outputs
  digitalWrite(LIGHT1, zone1Active);
  digitalWrite(FAN1, zone1Active);

  digitalWrite(LIGHT2, zone2Active);
  digitalWrite(FAN2, zone2Active);

  digitalWrite(VENTILATION_LED, ventilationActive);
}
