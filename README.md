# ESP_32_FreeRTOS_Practice
 
 ![FreeRTOS](https://user-images.githubusercontent.com/58724748/135718655-f1709f39-dc4c-4515-8413-3833cf0c771f.gif)

 
 > Executing task in folder FreeRTOS: C:\Users\USer\.platformio\penv\Scripts\platformio.exe run --target upload <

Processing esp32dev (platform: espressif32; board: esp32dev; framework: arduino)

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-----Verbose mode can be enabled via `-v, --verbose` option

CONFIGURATION: https://docs.platformio.org/page/boards/espressif32/esp32dev.html

PLATFORM: Espressif 32 (3.3.2) > Espressif ESP32 Dev Module

HARDWARE: ESP32 240MHz, 320KB RAM, 4MB Flash

DEBUG: Current (esp-prog) External (esp-prog, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa)

PACKAGES:

 - framework-arduinoespressif32 3.10006.210326 (1.0.6)
 
 - tool-esptoolpy 1.30100.210531 (3.1.0)
 
 - tool-mkspiffs 2.230.0 (2.30)
 
 - toolchain-xtensa32 2.50200.97 (5.2.0)
 
LDF: Library Dependency Finder -> http://bit.ly/configure-pio-ldf

LDF Modes: Finder ~ chain, Compatibility ~ soft

Found 28 compatible libraries

Scanning dependencies...

No dependencies

Building in release mode

Retrieving maximum program size .pio\build\esp32dev\firmware.elf

Checking size .pio\build\esp32dev\firmware.elf

Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"

RAM:   [          ]   4.1% (used 13488 bytes from 327680 bytes)

Flash: [==        ]  15.9% (used 208450 bytes from 1310720 bytes)

Configuring upload protocol...

AVAILABLE: esp-prog, espota, esptool, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa

CURRENT: upload_protocol = esptool

Looking for upload port...

Auto-detected: COM4

Uploading .pio\build\esp32dev\firmware.bin

esptool.py v3.1

Serial port COM4

Connecting....

Chip is ESP32-D0WDQ6 (revision 1)

Features: WiFi, BT, Dual Core, 240MHz, VRef calibration in efuse, Coding Scheme None

Crystal is 40MHz

MAC: ac:67:b2:2b:14:90

Uploading stub...

Running stub...

Stub running...

Changing baud rate to 460800

Changed.

Configuring flash size...

Auto-detected Flash size: 4MB

Flash will be erased from 0x00001000 to 0x00005fff...

Flash will be erased from 0x00008000 to 0x00008fff...

Flash will be erased from 0x0000e000 to 0x0000ffff...

Flash will be erased from 0x00010000 to 0x00042fff...

Compressed 17104 bytes to 11191...

Writing at 0x00001000... (100 %)

Wrote 17104 bytes (11191 compressed) at 0x00001000 in 0.5 seconds (effective 259.4 kbit/s)...

Hash of data verified.

Compressed 3072 bytes to 128...

Writing at 0x00008000... (100 %)

Wrote 3072 bytes (128 compressed) at 0x00008000 in 0.1 seconds (effective 364.6 kbit/s)...

Hash of data verified.

Compressed 8192 bytes to 47...

Writing at 0x0000e000... (100 %)

Wrote 8192 bytes (47 compressed) at 0x0000e000 in 0.1 seconds (effective 524.3 kbit/s)...

Hash of data verified.

Compressed 208560 bytes to 107450...

Writing at 0x00010000... (14 %)

Writing at 0x0001ed88... (28 %)

Writing at 0x00024459... (42 %)

Writing at 0x0002d2af... (57 %)

Writing at 0x00033d75... (71 %)

Writing at 0x000399bf... (85 %)

Writing at 0x0003f733... (100 %)

Wrote 208560 bytes (107450 compressed) at 0x00010000 in 2.6 seconds (effective 636.1 kbit/s)...

Hash of data verified.


Leaving...

Hard resetting via RTS pin...

============================================================================ [SUCCESS] Took 6.79 seconds 

============================================================================

Processing fm-devkit (platform: espressif32; board: fm-devkit; framework: arduino)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Verbose mode can be enabled via `-v, --verbose` option

CONFIGURATION: https://docs.platformio.org/page/boards/espressif32/fm-devkit.html

PLATFORM: Espressif 32 (3.3.2) > ESP32 FM DevKit

HARDWARE: ESP32 240MHz, 320KB RAM, 4MB Flash

DEBUG: Current (esp-prog) External (esp-prog, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa)

PACKAGES:

- framework-arduinoespressif32 3.10006.210326 (1.0.6)

- tool-esptoolpy 1.30100.210531 (3.1.0)

- tool-mkspiffs 2.230.0 (2.30)

- toolchain-xtensa32 2.50200.97 (5.2.0)

LDF: Library Dependency Finder -> http://bit.ly/configure-pio-ldf

LDF Modes: Finder ~ chain, Compatibility ~ soft

Found 28 compatible libraries

Scanning dependencies...

No dependencies

Building in release mode

Retrieving maximum program size .pio\build\fm-devkit\firmware.elf

Checking size .pio\build\fm-devkit\firmware.elf

Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"

RAM:   [          ]   4.1% (used 13488 bytes from 327680 bytes)

Flash: [==        ]  15.9% (used 208450 bytes from 1310720 bytes)

Configuring upload protocol...

AVAILABLE: esp-prog, espota, esptool, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa

CURRENT: upload_protocol = esptool

Looking for upload port...

Auto-detected: COM4

Uploading .pio\build\fm-devkit\firmware.bin

esptool.py v3.1

Serial port COM4

Connecting....

Chip is ESP32-D0WDQ6 (revision 1)

Features: WiFi, BT, Dual Core, 240MHz, VRef calibration in efuse, Coding Scheme None

Crystal is 40MHz

MAC: ac:67:b2:2b:14:90

Uploading stub...

Running stub...

Stub running...

Changing baud rate to 460800

Changed.

Configuring flash size...

Auto-detected Flash size: 4MB

Flash will be erased from 0x00001000 to 0x00005fff...

Flash will be erased from 0x00008000 to 0x00008fff...

Flash will be erased from 0x0000e000 to 0x0000ffff...

Flash will be erased from 0x00010000 to 0x00042fff...

Compressed 17104 bytes to 11191...

Writing at 0x00001000... (100 %)

Wrote 17104 bytes (11191 compressed) at 0x00001000 in 0.5 seconds (effective 260.8 kbit/s)...

Hash of data verified.

Compressed 3072 bytes to 128...

Writing at 0x00008000... (100 %)

Wrote 3072 bytes (128 compressed) at 0x00008000 in 0.1 seconds (effective 363.4 kbit/s)...

Hash of data verified.

Compressed 8192 bytes to 47...

Writing at 0x0000e000... (100 %)

Wrote 8192 bytes (47 compressed) at 0x0000e000 in 0.1 seconds (effective 524.2 kbit/s)...

Hash of data verified.

Compressed 208560 bytes to 107450...

Writing at 0x00010000... (14 %)

Writing at 0x0001ed88... (28 %)

Writing at 0x00024459... (42 %)

Writing at 0x0002d2af... (57 %)

Writing at 0x00033d75... (71 %)

Writing at 0x000399bf... (85 %)

Writing at 0x0003f733... (100 %)

Wrote 208560 bytes (107450 compressed) at 0x00010000 in 2.6 seconds (effective 630.0 kbit/s)...

Hash of data verified.


Leaving...

Hard resetting via RTS pin...

============================================================================ [SUCCESS] Took 6.73 seconds ============================================================================

Environment    Status    Duration

-------------  --------  ------------

esp32dev       SUCCESS   00:00:06.793

fm-devkit      SUCCESS   00:00:06.730

============================================================================ 2 succeeded in 00:00:13.523 

============================================================================ 


Terminal will be reused by tasks, press any key to close it.
