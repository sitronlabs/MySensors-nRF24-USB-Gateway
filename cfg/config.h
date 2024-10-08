#ifndef CONFIG_H
#define CONFIG_H

#if R0

/* Leds configuration */
#define CONFIG_LED_GREEN_PIN 6
#define CONFIG_LED_YELLOW_PIN 5
#define CONFIG_LED_RED_PIN 4

/* MySensors configuration
 * @see https://www.mysensors.org/build/advanced_gateway */
#define MY_DEBUG
#define MY_RADIO_RF24
#define MY_RF24_DATARATE RF24_250KBPS  // Default speed
#define MY_RF24_PA_LEVEL RF24_PA_LOW   // Increase transmit power if necessary, but RF24_PA_MAX can lead to frame loss because of unstable power rail
#define MY_RF24_CE_PIN 9
#define MY_RF24_CS_PIN 10
#define MY_GATEWAY_FEATURE
#define MY_GATEWAY_SERIAL
#define MY_INCLUSION_MODE_FEATURE
#define MY_INCLUSION_BUTTON_FEATURE
#define MY_INCLUSION_MODE_DURATION 60
#define MY_INCLUSION_MODE_BUTTON_PIN 7
#define MY_INCLUSION_LED_PIN CONFIG_LED_YELLOW_PIN
#define MY_DEFAULT_LED_BLINK_PERIOD 300
#define MY_DEFAULT_ERR_LED_PIN CONFIG_LED_RED_PIN
#define MY_DEFAULT_RX_LED_PIN CONFIG_LED_GREEN_PIN

#elif R3

/* MySensors configuration
 * @see https://www.mysensors.org/build/advanced_gateway */
#define MY_DEBUG
#define MY_RADIO_RF24
#define MY_RF24_DATARATE RF24_250KBPS  // Default speed
#define MY_RF24_PA_LEVEL RF24_PA_LOW   // Increase transmit power if necessary, but RF24_PA_MAX can lead to frame loss because of unstable power rail
#define MY_RF24_CE_PIN 9
#define MY_RF24_CS_PIN 10
#define MY_GATEWAY_FEATURE
#define MY_GATEWAY_SERIAL
#define MY_INCLUSION_MODE_FEATURE
#define MY_INCLUSION_BUTTON_FEATURE
#define MY_INCLUSION_MODE_DURATION 60
#define MY_INCLUSION_MODE_BUTTON_PIN A3
#define MY_INCLUSION_LED_PIN 8
#define MY_DEFAULT_LED_BLINK_PERIOD 300
#define MY_DEFAULT_ERR_LED_PIN 7
#define MY_DEFAULT_RX_LED_PIN 6
#define MY_DEFAULT_TX_LED_PIN 5
// #define MY_RF24_CHANNEL 124

#endif

#endif
