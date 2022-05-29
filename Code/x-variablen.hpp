#pragma once

//       Eingänge

#define RXD2 17
#define TXD2 16

#define led_esp 19
#define led_detector 27

#define serial_detector_aktiv 15
#define serial_detector_scan 18


const int input_light = 36; // Hardwareeingang von Lichtsensor
const int input_ubext = 39;      // Hardwareeingang von Spannungsteiler

// MQTT Definitionen

#define detector_diagnose "Melder-Diagnose/"
#define detector_status "Melder-Status/"
#define detector_control "Melder-Steuern/"
#define group_control "Gruppen-Steuerung/"
#define esp_status "ESP-Status/"
#define extension "Erweiterungen/"
#define ext_light "Lichtsensor/"
#define ext_sensor "BME-280/"
#define ext_ubext "UB-Ext/"
#define ext_bluetooth "Bluetooth/"

#define safefile "/config.json"

// Variablen

struct Config
{
    boolean mqtt;
    String mqtt_ip;
    String mqtt_port;
    String mqtt_topic_base;
    String mqtt_topic_define;
    String esp_name;
    String wifi_ssid;
    String wifi_pw;
    boolean wifi_dhcp;
    String wifi_ip;
    String wifi_gw;
    String wifi_subnet;
    String wifi_dns;
    boolean seriel;
    String detector_group;
    String detector_location;
    boolean bme_280;
    boolean bme_280_temperature;
    boolean bme_280_humidity;
    boolean bme_280_pressure;
    boolean bme_280_high;
    boolean light;
    boolean ubext;
    boolean bluetooth;
};
extern Config config;

struct WebServer
{
    String navigation;
    String wifi_ssid;
};
extern WebServer webserver;

extern int seri_status;
extern String ssize;
extern String seri_message_receive;

extern boolean AP_Mode;

extern AsyncWebServer *server;
extern const char *PARAM_MESSAGE;
extern const char notbetrieb_html[] PROGMEM;

extern unsigned long timer_time;
extern unsigned long timer_alarm;
extern unsigned long timer_bluetooth;
