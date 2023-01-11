# Intro
If you don't know how to work with firmware, jump to the **shortcut** section.
**babyBear_firmware.bin is a compiled Marlin to work with recommended controller board, display and drivers.**

### babyBear developed around and tested with Marlin firmware
It is possible to use a different firmware.
I just decided not to split my energy on a lot of options.
If you can make other firmware work with the babyBear, feel free to perform a pull request.


## shortcut
If you have the firmware file, it is very simple.
- download the firmware file [babyBear_firmware.bin](babyBear_firmware.bin).
- Put the firmware file into an SD card.
- Insert SD card into the machine.
- Turn on the machine.
- You would see messages like "erasing" or "uploading".
- Once it is done, you will see Marlin printer interface.
- Done! Happy printing!

## Basics
### If you don't need any customization and you have the recommended hardware
- Just follow the **shortcut** section.

### If you have different hardware or want to do some customizations with Marlin firmware
- Follow **How to install Marlin** and **How to configure Marlin**

### Ah, you are the rogue one?
- Well, at least take a look at configuration files here.


## How to install Marlin
Polar kinematics added to Marlin by bugfix.2.1.x

babyBear doesn't require any special step.
Please follow official Marlin guide:
https://marlinfw.org/docs/basics/install.html

Just like each machine, you must edit configuration.h and configuration_adv.h files
- If you are using the recommended hardware, you can use the [Configuration.h](Configuration.h) and [Configuration_adv.h](Configuration_adv.h) files.
- for other hardware, follow the **Configuration** section


## How to configure Marlin
- uncomment #define POLAR line.
- To have a starting point, copy the step, feedrate and acceleration settings from [Configuration.h](Configuration.h)
- uncomment #define LIN_ADVANCE line in the Configuration_adv.h file.
- Set ADVANCE_K to 0.15, or perform a calibration test to find out the best one. However,  polar axis motions near the center is weird and requires a lot of work. You would just save your time and go with 0.15 :)
- If you don't have the recommended hardware, perform the hardware related configurations. 



## Recommended and tested hardware
- MKS Robin nano v3 Board.
- TMC 2209 drivers
- MKS TS35 display.
- BMG type extruder with 3:1 reduction.