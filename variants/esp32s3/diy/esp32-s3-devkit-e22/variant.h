

#define HAS_LORA 1
#define USE_SX1262 1

#define TX_GAIN_LORA 7 // gain module e22
#define SX126X_MAX_POWER 22 // max power + gain = max radio power - EU 27db
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // required with documentation

#define SX126X_CS 14    // EBYTE module's NSS pin // FIXME: rename to SX126X_SS
#define SX126X_SCK 21   // EBYTE module's SCK pin
#define SX126X_MOSI 38 // EBYTE module's MOSI pin
#define SX126X_MISO 39 // EBYTE module's MISO pin  

#define SX126X_RESET 40 // EBYTE module's NRST pin
#define SX126X_BUSY 41 // EBYTE module's BUSY pin
#define SX126X_DIO1 42 // EBYTE module's DIO1 pin

#define SX126X_TXEN 9 // Schematic connects EBYTE module's TXEN pin to MCU
#define SX126X_RXEN 10 // Schematic connects EBYTE module's RXEN pin to MCU

#define LORA_CS SX126X_CS     // Compatibility with variant file configuration structure
#define LORA_SCK SX126X_SCK   // Compatibility with variant file configuration structure
#define LORA_MOSI SX126X_MOSI // Compatibility with variant file configuration structure
#define LORA_MISO SX126X_MISO // Compatibility with variant file configuration structure
#define LORA_DIO1 SX126X_DIO1 // Compatibility with variant file configuration structure


#define HAS_SCREEN 0 

#define BOARD_HAS_PSRAM


#define I2C_SCL 9
#define I2C_SDA 8

