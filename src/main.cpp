/* Config */
#include "../cfg/config.h"

/* Arduino libraries */
#include <Arduino.h>
#include <MySensors.h>

/* Avr libraries */
#include <avr/wdt.h>

void setup() {

    /* Enable watchdog to prevent the gateway from becoming unresponsive */
    wdt_enable(WDTO_8S);
}

void presentation() {
}

void loop() {
    /* There is no need to explicitely pet the watchdog here
     * as MySensors does it before every call of the loop function */
}
