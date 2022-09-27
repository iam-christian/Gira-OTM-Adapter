#ifndef _COM_WIFI_H
#define _COM_WIFI_H

extern String hostname;

void wlan_connect();
void scan_wifi_ssid();
void wlan_config();

IPAddress ipwandeln(String temp);

#endif
