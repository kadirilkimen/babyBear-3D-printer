# Recommended print settings for the parts

## for all the parts

### 0.4mm nozzle is the most common one. Therefore 0.4mm nozzle size affected any nozzle size related dimensions. It is recommended to use 0.4mm nozzle. But also 0.6mm  would work too.

### Speed is enemy of precision and accuracy on a 3D printer. Most of the prototype printed around 50mm/s feedrate. If you want to shorten printing time, you would prefer to speed up inside lines and keep the outer wall and skin slow.

### To get a better final surfaces for rotary axis bearing mount, I recommend to activate ironing.

### The values about the Strength/Surface are for reference to stress what is more important for the part. Because the printer you have, speed and filament all relative, You would use this value and your experience to figure out best speed and nozzle temp, cooling etc. Please note that, higher the surface quality means better precision.
- 100% : The strength of the part is the most important and we don't need much surface quality/precision at all.
- 50% : Both strength and surface quality are important. We can't get them both ( if you are a crazy pro super skilled 3D printer person, hats off ). Therefore we sacfrifice from both to get best compromise.
- 0% : The strength is not so important and we would prefer to get best surface quality.


### 100% solid parts means it is completely solid. Some people do this by 100% infill. Some people prefer to fill the part all with the wall.In my opinion, filling the part with wall is best for most cases. But sometimes, infill lines may bring more strength because of the line directions. Inspect the part and decide yourself.

## ---------------------------------------------------
## For all printable parts
- Layer height : 0.2mm
- Line width : 0.4mm
- Wall count : min. 2
- Infill line width : 0.6mm
- Infill density : min. 10% 
- Infill type : Cubic subdivision
- Print speed : under 100mm/s
- Strength/surface : 40%

## ---------------------------------------------------
## 100% solid parts
- Strength/surface: 50%
#### ------------------------
- Hotend-clamps.stl
- Hotend-grill.stl
- Hotend-tool-socket.stl
- Tool-nut.stl
- Z-axis-belt-clamps.stl

## ---------------------------------------------------

##  Z Drive Pulley
### It is difficult to print GT2 pulley teeth with 0.4mm nozzle but not impossible. 0.2mm is best radius you can get with 0.4mm nozzle it creates more smooth teeth profile than actual GT2 profile. The settings below helps to get better GT2 profile. I printed the prototype with 0.4mm and so far works fine. If you have a chance, I recommend to print with a smaller nozzle.
- 100% solid
- Layer height: 0.1mm
- Line width : 0.4mm or less
- Strength/surface : 50%
- Print speed : 75mm/s or less
#### ------------------------
- Z-drive-pulley-pin.stl
- Z-drive-pulley.stl

## ---------------------------------------------------
## Structural parts
- Wall count : min. 3
- Infill density: min. 15%
- Strength/surface: 50%
#### ------------------------
- Extruder-body.stl
- Hotend-body.stl
- Main-body.stl
- rotary-axis-bearing-lock-nut.stl
- rotary-axis-bearing-spacer.stl
- Rotary-axis-motor-mount-nut.stl
- Rotary-axis-motor-mount-washer.stl
- Rotary-axis-motor-mount.stl
- Rotary-axis-preload-nut.stl
- Rotary-axis-rotor.stl
- Rotary-axis-tool.stl ( PLA recommended )
- Spool-supports.stl
- Tool-holder.stl
- X-axis-belt-clamps.stl
- X-axis-carriage.stl
- Z-axis-belt-tensioner-nut
- Z-axis-carriage.stl
- Z-drive-tensioner.stl
- Z-drive-top-support

## ---------------------------------------------------
## Lightweight parts
- Strength/surface : 25%
#### ------------------------
- Bearing-cover.stl
- Bottom-cover.stl
- Cable-channel.stl
- PSU-cover.stl
- Spool-pins.stl
- Spool-support-spacer.stl
- X-axis-cable-mount.stl
