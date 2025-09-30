# ESP32s3 - devkit c1 n16r8 clone with CDEBYTE E22-900M30S - Variant for Meshtastic
I'm presenting my meshtastic node variant using a Chinese clone of the Esp32s3n61r8 devkit c1 board with 16MB flash, 8MB PSRAM, and the E22-900M30S module. After analyzing the free ESP pins, the connection is correct. The connection is described in the variant.h file.

E22900M30S requires

```bash
#define TX_GAIN_LORA 7 // gain module e22
#define SX126X_MAX_POWER 22 // max power + gain = max radio power - EU 27db
```
this is what the configure.h documentation says
```bash
// Gain for common modules with transmit PAs
#ifdef EBYTE_E22_900M30S
// 10dB PA gain and 30dB rated output; based on measurements from
// https://github.com/S5NC/EBYTE_ESP32-S3/blob/main/E22-900M30S%20power%20output%20testing.txt
#define TX_GAIN_LORA 7
#define SX126X_MAX_POWER 22
#endif
```


## 1. File info
- esp32-s3-devkit-e22/variant.h - define connection and setup configure
- esp32-s3-devkit-e22/platformio.ini - platformio config file
- esp32-s3-devkit-e22/pins_arduino.h - required config file for arduino/esp platforms
- boards/esp32-s3-devkit-e22.json - board devkit c1 clone configuration
- partion.csv - partition file for 16MB flash - put in header folder

## 2. Install and assembly
- Add files from this repository, keeping their proper locations to Meshtastic firmware
- compile the selected env and upload to your board
- connect the radio module as defined in the **variant.h** file
- **Make sure everything is in order so as not to damage the radio.**
- run node and test your network :)

## 3. Power
Standard consumption is approximately 110mA, with an average of 350-450mW at 27dBm during transmission.

- ADD a 100nF capacitor between the +5V power supply for the radio module and GND, and a 2000uF electrolytic capacitor to maintain power.

## 4. Troubleshooting
I'm on the 2.7.9-10 alpha software package.

-https ssl cert error during connect from client.meshtatistc.org

Apart from these issues, everything seems to be working fine.

## 5. Links

 - [Official Meshtastic webiste](meshtastic.org)
 - [Meshtastic Github](https://github.com/meshtastic)
 - [EByte Site E22900M30S](https://www.cdebyte.com/products/E22-900M30S/3)
 - [space.LAB](https://adamko.space/spacelab/)
 - If you like my work [donate my LAB -buycoffee.to](https://buycoffee.to/lab.adamko.space)