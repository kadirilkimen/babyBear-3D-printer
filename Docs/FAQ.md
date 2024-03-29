# **Frequently asked questions about the babyBear and polar printers**

## Is the babyBear just a smaller version of the PolarBear?
No. the Polar bear is a flexible machine. You can use any controller board, software or firmware to give it a custom purpose.
On the other hand, the babyBear is a 3D printer with ability to add milling spindle and laser cutter.

## **How much does it cost to build?**
It would cost somewhere around 200 to 400 USD.
It depends on your purchasing decisions and market situation.
Please keep in mind, some small items like nuts and bolts mostly come in packs not the exact amount if the 

## **Does the babyBear have a heated bed?**
Unfortunately, current version doesn't have a heated bed.
I have been successful to transfer power to the infinitely rotatable printing bed.
However, reading back the temperature is a big issue. Both standard 3D printer electronics and software is not suitable for this purpose.
I am working on a marlin update and an electronic solution.

## **What skills do I need to build the babybear?**
3D printing experience with PETG(or similar material of your choice).
Good experience with electrical connections.
Basic understanding of electronic circuits.
Basic mechanical assembly skills and experience with the required tools.
You may need to perform some soldering.

## **Could the babyBear be my only 3D printer?**
Of course it can. However, I recommend you to have a regular printer too.
Software and most hardware doesn't have a good support for polar 3D printers yet. You have to tinker around to make it work.
It would be good to have a regular 3D printer that works without tinkering.


## **Is it good to start 3D printing with the babyBear?**
I wouldn't recommend polar printers as first printer. It is better to gain some experience on a standard 3D printer.


## **Why a polar machine is better than a cartesian one?**
Comparing such different systems is not the best way to judge a polar machine.
The babyBear can perform everything you can do on a cartesian 3D printer.
Cartesian 3D printers can follow straight lines better and polar 3D printers can follow curves better.
If you are not going to print just cubes, you will end up models with both curves and straight edges.
Depending on what shapes you have more on the part, one will outperform the other in terms of surface quality.
On the other hand, a polar axis can perform some tasks that a cartesian printer can't. You have a possibility to approach workpice from sides.
This gives you opportunity of performing tasks like sculpting, pottery, 4Dish milling/printing etc. Of course you need software or creative ways to perform those tasks. Yet, even with software and creative tasks, a cartesian machine can't offer those opportunities.
Cartesian machines outperform polar machines in terms of simplicity and being off the shelf. All software and hardware are already tuned for them.
A polar printer has a great advantage in vase(surface) mode printing(single wall shell printing). It can create much better surface in vase mode and can print faster.


## **What is the advantage of a polar printer in vase mode printing?**
In vase mode, a printer creates single wall shell. This allows the printer to go only one direction without interrupting the extruding process.
However, a cartesian machine has to change directions in X and Y axis constantly to perform vase mode operations. This requires slow downs and speed ups in X an Y direction changes. Even if you set good printing speed, those speed changes reduce overal speed and create possibility of inaccuracies. Extrusion process is not a fast process. It can't keep up with constant speed changes. Therefore you end up having more material in some places and less material in other places instead of a constant volume of material.

In a polar printer, rotary axis can spin in one direction indefinitely. Unless the part has a complex geometry, it doesn't have to spin back. Therefore speed downs and speed ups are a lot less than a cartesian one. This helps keeping up with the expected speeds and reduces extrusion inaccuracies. Therefore creates more constant material volume and better surface quality.

  
## **Why the rotary axis bearings are so big?**
Bigger bearings help to distribute forces to a larger area of the printed parts.
Because 3D printed plastics are not as rigid as metals, too much force in a small area cause deformations.
If we use small bearings, all the force applied on work bed would be focused on a small area on the printed parts.


## **Can I build and sell the babyBear?**
Please check the project license and get legal advice.
