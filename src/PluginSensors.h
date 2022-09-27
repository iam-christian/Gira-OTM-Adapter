#ifndef _PLUGIN_SENSORS_H
#define _PLUGIN_SENSORS_H

#define SEALEVELPRESSURE_HPA (1013.25)

void bme_refresh();
void light_refresh();
void ubext_refresh();

#endif