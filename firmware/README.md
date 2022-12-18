
<p align="center"><img src="../media/babyBear-bootscreen.png" alt="babyBear's logo" /></p>


<h1 align="center">Marlin Firmware for the babyBear</h1>

## It's Marlin 2.1 firmware without any code modification, configured for the babyBear with MKS robin nano V3 board, tmc2209 drivers and MKS TS35 display.



# How does it work?
### I am working on polar axis kinematics for Marlin. But for now, this firmware thinks it is a cartesian machine.
### To make the polar axis work,
- First generate a regular g-code.
- Then post-process it using polartools that I developed for the project : https://github.com/kadirilkimen/polarToolsJS
- polarTools re-calculate Linear X and Y axis coordinates into Linear X and polar Y.
- Save the calculated g-code and load it to the babyBear.


# How to upload the firmware to the controller board?
- You have to compile the source code first.
- Compiling the source code generates firmware files.
- Then you can put this firmware files into an sd card and put it in the babyBear.
- When you power on the machine, it will see the firmware files and update itself.

# How can I compile the source code?
If you have some experience about compiling source codes, this will help : https://www.google.com/search?q=how+to+compile+marlin+firmware
If you are not into coding and compiling something, just to bring some financial support for my projects, I share already compiled firmware files in my patreon page : https://www.patreon.com/kadirilkimen



## -----------------------------------------------------
## Marlin License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
