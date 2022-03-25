
// Wifi Settings
#define SSID                          "DeKeKaSie"
#define PASSWORD                      "DieNeueWohnungIstToll"

// MQTT Settings
#define NAME                          "Bed"
#define HOSTNAME                      "bed-sensor"
#define MQTT_SERVER                   "<CHANGE-ME>"
#define mqtt_username                 "<CHANGE-ME>"
#define mqtt_password                 "<CHANGE-ME>"

// HX711 Pins
const int LOADCELL_DOUT_PIN = 2; // Remember these are ESP GPIO pins, they are not the physical pins on the board.
const int LOADCELL_SCK_PIN = 3;
int calibration_factor = 2000; // Defines calibration factor we'll use for calibrating.
