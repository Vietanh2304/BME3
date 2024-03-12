#ifndef APP_CONFIG_H
#define APP_CONFIG_H

/*Device configuration*/
#define DEVICE_ID

/*WIFI configuration*/
#define WIFI_SSID_CONFIG
#define WIFI_PASSWORD_CONFIG
#define WIFI_SSID_MAX_LENGTH
#define WIFI_PASSWORD_MAX_LENGTH

/*MQTT configuration*/
#define MQTT_BROKER_ADDRESS
#define MQTT_BROKER_PORT
#define MQTT_CLIENT_ID
#define MQTT_USER_NAME
#define MQTT_PASSWORD
#define MQTT_DATA_SUB_TOPIC
#define MQTT_APP_CMD_TOPIC
#define MQTT_MAIN_TOPIC


/*Loadcell configuration*/
#define LOADCELL_DOUT_PIN_CFG
#define LOADCELL_SCK_PIN_CFG
#define MASS_TO_VOLUME_COEFFICIENT
#define MASS_DEFAULT_FOR_CALIB
#define CALIB_COEFFICIENT

/*Flash*/
#define MAX_FLASH
#define WIFI_SSID_CONFIG_FLASH_ADD
#define WIFI_PASSWORD_CONFIG_FLASH_ADD
#define WIFI_SSID_UPDATE_FLASH_ADD
#define WIFI_PASSWORD_UPDATE_FLASH_ADD
#define MQTT_BROKER_FLASH_ADD
#define DEVICE_ID_FLASH_ADD
#define CALIB_COEFFICIENT_FLASH_ADD

/*Other peripherals configuration*/
#define DISPLAY_CLK_PIN
#define DISPLAY_DIO_PIN
#define TARE_BUTTON_PIN
#define LED_WIFI_CONNECT_PIN

#endif