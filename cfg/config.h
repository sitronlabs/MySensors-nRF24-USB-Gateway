#ifndef CONFIG_H
#define CONFIG_H

/* MySensors configuration */
#define MY_DEBUG
#define MY_RADIO_RF24  // Enable and select radio type attached
#define MY_RF24_CE_PIN 9
#define MY_RF24_CS_PIN 10
#define MY_GATEWAY_SERIAL                // Enable serial gateway
#define MY_INCLUSION_MODE_FEATURE        // Enable inclusion mode
#define MY_INCLUSION_MODE_DURATION 60    // Set inclusion mode duration (in seconds)
#define MY_DEFAULT_LED_BLINK_PERIOD 300  // Set blinking period
#define MY_DEFAULT_ERR_LED_PIN 4         // Error led pin
#define MY_DEFAULT_RX_LED_PIN 6          // Receive led pin
#define MY_DEFAULT_TX_LED_PIN 5          // the PCB, on board LED

#endif
