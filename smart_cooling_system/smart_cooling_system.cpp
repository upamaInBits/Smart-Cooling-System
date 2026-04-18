#include <dht11.h>
#include <LiquidCrystal_I2C.h>

// Pin Definitions
#define DHT11PIN 4
#define RELAY_PIN_1 2   // Fan relay
#define RELAY_PIN_2 3   // Cooling plate relay

// Create objects
dht11 DHT11;
LiquidCrystal_I2C lcd(0x27, 20, 4);

// Variables
int temp = 0;
const int TEMP_THRESHOLD = 23;

void setup() {
  // Set relay pins as output
  pinMode(RELAY_PIN_1, OUTPUT);
  pinMode(RELAY_PIN_2, OUTPUT);

  // Initialize Serial Monitor
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Initial display
  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
}

void loop() {
  // Read temperature from DHT11
  int chk = DHT11.read(DHT11PIN);

  if (chk == DHTLIB_OK) {
    temp = DHT11.temperature;

    // Print to Serial Monitor (for debugging)
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println(" C");

    // Control relays based on temperature
    if (temp > TEMP_THRESHOLD) {
      digitalWrite(RELAY_PIN_1, HIGH);
      digitalWrite(RELAY_PIN_2, HIGH);

      lcd.setCursor(0, 1);
      lcd.print("Fan: ON  Cooling:ON ");
    } else {
      digitalWrite(RELAY_PIN_1, LOW);
      digitalWrite(RELAY_PIN_2, LOW);

      lcd.setCursor(0, 1);
      lcd.print("Fan: OFF Cooling:OFF");
    }

    // Display temperature on LCD
    lcd.setCursor(13, 0);
    lcd.print("   "); // Clear old value
    lcd.setCursor(13, 0);
    lcd.print(temp);
    lcd.print("C");
  } 
  else {
    // Error handling
    lcd.setCursor(0, 1);
    lcd.print("Sensor Error      ");
    Serial.println("Failed to read from DHT11");
  }

  delay(1000); // 1 second delay
}