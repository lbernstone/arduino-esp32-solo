# arduino-esp32-SOLO

These libraries allow you to compile arduino-esp32 applications for the ESP32-SOLO single core MCU.  Just replace the files in your esp32 directory with the included files.
The libraries are only compiled for release versions of arduino-esp32.  Checkout the commit corresponding to your version in Arduino IDE boards manager.

## Recommendation for Platform.IO users

[Tasmota](https://github.com/tasmota/platform-espressif32/releases) has started providing releases supporting the SOLO, so I will recommend using those packages, along with Platform.io in the future.

## Usage
Locate your local installation of the ESP32 Core for arduino. On windows, this usualy should be here:

```
%LocalAppData%\Arduino15\packages\esp32\hardwre\esp32
```

__Recommendation:__ Create a backup of this folder, otherwise you must re-install the ESP32-Core for Arduino if you want to use other modules as the ESP32-SOLO.

Open this folder and the correct subfolder inside with the correct version.

Place the content of this repository into this folder.

## How to build this on your own

If you want to build the files in this repository on your own, perform the following steps:

1. Basicaly follow the build-steps of the [ESP32 Arduino Library Builder](https://github.com/espressif/esp32-arduino-lib-builder).
2. Before running the build-script, locate the file `sdkconfig` in the main folder, open it with a text-editor and add the following line:

```
CONFIG_FREERTOS_UNICORE=y
```

3. Now run the build-script (this will take some time). Your files will be created in the folder `/out`.
