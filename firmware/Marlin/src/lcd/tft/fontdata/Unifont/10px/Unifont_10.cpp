/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>

// Unifont 16pt, capital 'A' heigth: 10px, width: 100%, range: 0x0020-0x00ff
extern const uint8_t Unifont_10[3107] = {
  129,10,32,0,255,0,14,254, // unifont_t
  // 0x0020 " "
  0,0,0,8,0,0,
  // 0x0021  !
  1,10,10,8,4,0,128,128,128,128,128,128,128,0,128,128,
  // 0x0022  "
  5,4,4,8,2,8,136,136,136,136,
  // 0x0023  #
  6,10,10,8,1,0,36,36,36,252,72,72,252,144,144,144,
  // 0x0024  $
  7,10,10,8,1,0,16,124,146,144,112,28,18,146,124,16,
  // 0x0025  %
  7,10,10,8,1,0,98,148,148,104,16,16,44,82,82,140,
  // 0x0026  &
  7,10,10,8,1,0,56,68,68,40,48,82,138,132,140,114,
  // 0x0027  '
  1,4,4,8,4,8,128,128,128,128,
  // 0x0028  (
  3,12,12,8,3,255,32,64,64,128,128,128,128,128,128,64,64,32,
  // 0x0029  )
  3,12,12,8,2,255,128,64,64,32,32,32,32,32,32,64,64,128,
  // 0x002a  *
  7,7,7,8,1,1,16,146,84,56,84,146,16,
  // 0x002b  +
  7,7,7,8,1,1,16,16,16,254,16,16,16,
  // 0x002c  ,
  2,4,4,8,3,254,192,64,64,128,
  // 0x002d  -
  4,1,1,8,2,4,240,
  // 0x002e  .
  2,2,2,8,3,0,192,192,
  // 0x002f  /
  6,10,10,8,1,0,4,4,8,16,16,32,32,64,128,128,
  // 0x0030  0
  6,10,10,8,1,0,48,72,132,140,148,164,196,132,72,48,
  // 0x0031  1
  5,10,10,8,2,0,32,96,160,32,32,32,32,32,32,248,
  // 0x0032  2
  6,10,10,8,1,0,120,132,132,4,24,32,64,128,128,252,
  // 0x0033  3
  6,10,10,8,1,0,120,132,132,4,56,4,4,132,132,120,
  // 0x0034  4
  6,10,10,8,1,0,8,24,40,72,136,136,252,8,8,8,
  // 0x0035  5
  6,10,10,8,1,0,252,128,128,128,248,4,4,4,132,120,
  // 0x0036  6
  6,10,10,8,1,0,56,64,128,128,248,132,132,132,132,120,
  // 0x0037  7
  6,10,10,8,1,0,252,4,4,8,8,8,16,16,16,16,
  // 0x0038  8
  6,10,10,8,1,0,120,132,132,132,120,132,132,132,132,120,
  // 0x0039  9
  6,10,10,8,1,0,120,132,132,132,124,4,4,4,8,112,
  // 0x003a  :
  2,7,7,8,3,1,192,192,0,0,0,192,192,
  // 0x003b  ;
  2,9,9,8,3,255,192,192,0,0,0,192,64,64,128,
  // 0x003c  <
  5,9,9,8,2,0,8,16,32,64,128,64,32,16,8,
  // 0x003d  =
  6,5,5,8,1,2,252,0,0,0,252,
  // 0x003e  >
  5,9,9,8,1,0,128,64,32,16,8,16,32,64,128,
  // 0x003f  ?
  6,10,10,8,1,0,120,132,132,4,8,16,16,0,16,16,
  // 0x0040  @
  6,10,10,8,1,0,56,68,148,172,164,164,164,156,64,60,
  // 0x0041  A
  6,10,10,8,1,0,48,72,72,132,132,252,132,132,132,132,
  // 0x0042  B
  6,10,10,8,1,0,248,132,132,132,248,132,132,132,132,248,
  // 0x0043  C
  6,10,10,8,1,0,120,132,132,128,128,128,128,132,132,120,
  // 0x0044  D
  6,10,10,8,1,0,240,136,132,132,132,132,132,132,136,240,
  // 0x0045  E
  6,10,10,8,1,0,252,128,128,128,248,128,128,128,128,252,
  // 0x0046  F
  6,10,10,8,1,0,252,128,128,128,248,128,128,128,128,128,
  // 0x0047  G
  6,10,10,8,1,0,120,132,132,128,128,156,132,132,140,116,
  // 0x0048  H
  6,10,10,8,1,0,132,132,132,132,252,132,132,132,132,132,
  // 0x0049  I
  5,10,10,8,2,0,248,32,32,32,32,32,32,32,32,248,
  // 0x004a  J
  7,10,10,8,1,0,62,8,8,8,8,8,8,136,136,112,
  // 0x004b  K
  6,10,10,8,1,0,132,136,144,160,192,192,160,144,136,132,
  // 0x004c  L
  6,10,10,8,1,0,128,128,128,128,128,128,128,128,128,252,
  // 0x004d  M
  6,10,10,8,1,0,132,132,204,204,180,180,132,132,132,132,
  // 0x004e  N
  6,10,10,8,1,0,132,196,196,164,164,148,148,140,140,132,
  // 0x004f  O
  6,10,10,8,1,0,120,132,132,132,132,132,132,132,132,120,
  // 0x0050  P
  6,10,10,8,1,0,248,132,132,132,248,128,128,128,128,128,
  // 0x0051  Q
  7,11,11,8,1,255,120,132,132,132,132,132,132,180,204,120,6,
  // 0x0052  R
  6,10,10,8,1,0,248,132,132,132,248,144,136,136,132,132,
  // 0x0053  S
  6,10,10,8,1,0,120,132,132,128,96,24,4,132,132,120,
  // 0x0054  T
  7,10,10,8,1,0,254,16,16,16,16,16,16,16,16,16,
  // 0x0055  U
  6,10,10,8,1,0,132,132,132,132,132,132,132,132,132,120,
  // 0x0056  V
  7,10,10,8,1,0,130,130,130,68,68,68,40,40,16,16,
  // 0x0057  W
  6,10,10,8,1,0,132,132,132,132,180,180,204,204,132,132,
  // 0x0058  X
  6,10,10,8,1,0,132,132,72,72,48,48,72,72,132,132,
  // 0x0059  Y
  7,10,10,8,1,0,130,130,68,68,40,16,16,16,16,16,
  // 0x005a  Z
  6,10,10,8,1,0,252,4,4,8,16,32,64,128,128,252,
  // 0x005b  [
  3,12,12,8,4,255,224,128,128,128,128,128,128,128,128,128,128,224,
  // 0x005c "\"
  6,10,10,8,1,0,128,128,64,32,32,16,16,8,4,4,
  // 0x005d  ]
  3,12,12,8,1,255,224,32,32,32,32,32,32,32,32,32,32,224,
  // 0x005e  ^
  6,3,3,8,1,9,48,72,132,
  // 0x005f  _
  7,1,1,8,1,255,254,
  // 0x0060  `
  3,3,3,8,2,10,128,64,32,
  // 0x0061  a
  6,8,8,8,1,0,120,132,4,124,132,132,140,116,
  // 0x0062  b
  6,11,11,8,1,0,128,128,128,184,196,132,132,132,132,196,184,
  // 0x0063  c
  6,8,8,8,1,0,120,132,128,128,128,128,132,120,
  // 0x0064  d
  6,11,11,8,1,0,4,4,4,116,140,132,132,132,132,140,116,
  // 0x0065  e
  6,8,8,8,1,0,120,132,132,252,128,128,132,120,
  // 0x0066  f
  5,11,11,8,1,0,24,32,32,32,248,32,32,32,32,32,32,
  // 0x0067  g
  6,11,11,8,1,254,4,116,136,136,136,112,64,120,132,132,120,
  // 0x0068  h
  6,11,11,8,1,0,128,128,128,184,196,132,132,132,132,132,132,
  // 0x0069  i
  5,11,11,8,2,0,32,32,0,96,32,32,32,32,32,32,248,
  // 0x006a  j
  5,13,13,8,1,254,8,8,0,24,8,8,8,8,8,8,8,144,96,
  // 0x006b  k
  6,11,11,8,1,0,128,128,128,136,144,160,192,160,144,136,132,
  // 0x006c  l
  5,11,11,8,2,0,96,32,32,32,32,32,32,32,32,32,248,
  // 0x006d  m
  7,8,8,8,1,0,236,146,146,146,146,146,146,146,
  // 0x006e  n
  6,8,8,8,1,0,184,196,132,132,132,132,132,132,
  // 0x006f  o
  6,8,8,8,1,0,120,132,132,132,132,132,132,120,
  // 0x0070  p
  6,10,10,8,1,254,184,196,132,132,132,132,196,184,128,128,
  // 0x0071  q
  6,10,10,8,1,254,116,140,132,132,132,132,140,116,4,4,
  // 0x0072  r
  6,8,8,8,1,0,184,196,132,128,128,128,128,128,
  // 0x0073  s
  6,8,8,8,1,0,120,132,128,96,24,4,132,120,
  // 0x0074  t
  5,10,10,8,1,0,32,32,32,248,32,32,32,32,32,24,
  // 0x0075  u
  6,8,8,8,1,0,132,132,132,132,132,132,140,116,
  // 0x0076  v
  6,8,8,8,1,0,132,132,132,72,72,72,48,48,
  // 0x0077  w
  7,8,8,8,1,0,130,146,146,146,146,146,146,108,
  // 0x0078  x
  6,8,8,8,1,0,132,132,72,48,48,72,132,132,
  // 0x0079  y
  6,10,10,8,1,254,132,132,132,132,132,76,52,4,4,120,
  // 0x007a  z
  6,8,8,8,1,0,252,4,8,16,32,64,128,252,
  // 0x007b  {
  4,13,13,8,2,254,48,64,64,32,32,64,128,64,32,32,64,64,48,
  // 0x007c  |
  1,14,14,8,4,254,128,128,128,128,128,128,128,128,128,128,128,128,128,128,
  // 0x007d  }
  4,13,13,8,2,254,192,32,32,64,64,32,16,32,64,64,32,32,192,
  // 0x007e  ~
  7,3,3,8,1,8,98,146,140,
  // 0x007f - 0x009f  Control Characters
  255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
  // 0x00a0 " "
  0,0,0,8,0,0,
  // 0x00a1  ¡
  1,10,10,8,4,0,128,128,0,128,128,128,128,128,128,128,
  // 0x00a2  ¢
  7,10,10,8,1,0,16,16,124,146,144,144,146,124,16,16,
  // 0x00a3  £
  7,10,10,8,1,0,28,32,32,32,248,32,32,32,124,194,
  // 0x00a4  ¤
  6,8,8,8,1,1,132,120,72,132,132,72,120,132,
  // 0x00a5  ¥
  7,10,10,8,1,0,130,68,40,16,254,16,254,16,16,16,
  // 0x00a6  ¦
  1,10,10,8,4,0,128,128,128,128,0,0,128,128,128,128,
  // 0x00a7  §
  6,10,10,8,1,0,120,132,128,120,132,132,120,4,132,120,
  // 0x00a8  ¨
  4,2,2,8,2,12,144,144,
  // 0x00a9  ©
  8,10,10,8,0,0,60,66,153,165,161,161,165,153,66,60,
  // 0x00aa  ª
  5,7,7,8,2,5,112,8,120,136,120,0,248,
  // 0x00ab  «
  6,9,9,8,1,0,36,36,72,72,144,72,72,36,36,
  // 0x00ac  ¬
  6,4,4,8,1,0,252,4,4,4,
  // 0x00ad  ­
  16,16,32,16,0,254,170,170,0,1,128,0,58,99,194,84,51,201,138,72,114,73,128,0,0,1,128,0,3,193,128,0,0,1,128,0,85,85,
  // 0x00ae  ®
  8,10,10,8,0,0,60,66,185,165,165,185,169,165,66,60,
  // 0x00af  ¯
  6,1,1,8,1,11,252,
  // 0x00b0  °
  4,4,4,8,2,6,96,144,144,96,
  // 0x00b1  ±
  7,9,9,8,1,1,16,16,16,254,16,16,16,0,254,
  // 0x00b2  ²
  5,7,7,8,1,4,112,136,8,48,64,128,248,
  // 0x00b3  ³
  5,7,7,8,1,4,112,136,8,112,8,136,112,
  // 0x00b4  ´
  3,3,3,8,3,10,32,64,128,
  // 0x00b5  µ
  8,10,10,8,0,254,66,66,66,66,66,66,102,89,64,128,
  // 0x00b6  ¶
  7,11,11,8,1,255,126,244,244,244,116,20,20,20,20,20,20,
  // 0x00b7  ·
  2,2,2,8,3,4,192,192,
  // 0x00b8  ¸
  3,2,2,8,2,254,32,192,
  // 0x00b9  ¹
  5,7,7,8,1,4,32,96,160,32,32,32,248,
  // 0x00ba  º
  5,7,7,8,2,5,112,136,136,136,112,0,248,
  // 0x00bb  »
  6,9,9,8,1,0,144,144,72,72,36,72,72,144,144,
  // 0x00bc  ¼
  6,10,10,8,1,0,68,196,72,80,80,36,44,84,156,132,
  // 0x00bd  ½
  6,10,10,8,1,0,68,196,72,80,80,40,52,68,136,156,
  // 0x00be  ¾
  6,10,10,8,1,0,196,36,72,48,208,36,44,84,156,132,
  // 0x00bf  ¿
  6,10,10,8,1,0,32,32,0,32,32,64,128,132,132,120,
  // 0x00c0  À
  6,14,14,8,1,0,96,24,0,0,48,72,72,132,132,252,132,132,132,132,
  // 0x00c1  Á
  6,14,14,8,1,0,24,96,0,0,48,72,72,132,132,252,132,132,132,132,
  // 0x00c2  Â
  6,14,14,8,1,0,48,72,0,0,48,72,72,132,132,252,132,132,132,132,
  // 0x00c3  Ã
  6,14,14,8,1,0,100,152,0,0,48,72,72,132,132,252,132,132,132,132,
  // 0x00c4  Ä
  6,14,14,8,1,0,72,72,0,0,48,72,72,132,132,252,132,132,132,132,
  // 0x00c5  Å
  6,14,14,8,1,0,48,72,48,0,48,72,72,132,132,252,132,132,132,132,
  // 0x00c6  Æ
  7,10,10,8,1,0,62,80,144,144,254,144,144,144,144,158,
  // 0x00c7  Ç
  6,12,12,8,1,254,120,132,132,128,128,128,128,132,132,120,16,96,
  // 0x00c8  È
  6,14,14,8,1,0,96,24,0,0,252,128,128,128,248,128,128,128,128,252,
  // 0x00c9  É
  6,14,14,8,1,0,24,96,0,0,252,128,128,128,248,128,128,128,128,252,
  // 0x00ca  Ê
  6,14,14,8,1,0,48,72,0,0,252,128,128,128,248,128,128,128,128,252,
  // 0x00cb  Ë
  6,14,14,8,1,0,72,72,0,0,252,128,128,128,248,128,128,128,128,252,
  // 0x00cc  Ì
  5,14,14,8,2,0,96,24,0,0,248,32,32,32,32,32,32,32,32,248,
  // 0x00cd  Í
  5,14,14,8,2,0,48,192,0,0,248,32,32,32,32,32,32,32,32,248,
  // 0x00ce  Î
  5,14,14,8,2,0,96,144,0,0,248,32,32,32,32,32,32,32,32,248,
  // 0x00cf  Ï
  5,14,14,8,2,0,144,144,0,0,248,32,32,32,32,32,32,32,32,248,
  // 0x00d0  Ð
  7,10,10,8,0,0,120,68,66,66,242,66,66,66,68,120,
  // 0x00d1  Ñ
  6,14,14,8,1,0,100,152,0,0,132,196,196,164,164,148,148,140,140,132,
  // 0x00d2  Ò
  6,14,14,8,1,0,96,24,0,0,120,132,132,132,132,132,132,132,132,120,
  // 0x00d3  Ó
  6,14,14,8,1,0,24,96,0,0,120,132,132,132,132,132,132,132,132,120,
  // 0x00d4  Ô
  6,14,14,8,1,0,48,72,0,0,120,132,132,132,132,132,132,132,132,120,
  // 0x00d5  Õ
  6,14,14,8,1,0,100,152,0,0,120,132,132,132,132,132,132,132,132,120,
  // 0x00d6  Ö
  6,14,14,8,1,0,72,72,0,0,120,132,132,132,132,132,132,132,132,120,
  // 0x00d7  ×
  6,5,5,8,1,2,132,72,48,72,132,
  // 0x00d8  Ø
  6,12,12,8,1,255,4,116,136,140,148,148,164,164,196,68,184,128,
  // 0x00d9  Ù
  6,14,14,8,1,0,96,24,0,0,132,132,132,132,132,132,132,132,132,120,
  // 0x00da  Ú
  6,14,14,8,1,0,24,96,0,0,132,132,132,132,132,132,132,132,132,120,
  // 0x00db  Û
  6,14,14,8,1,0,48,72,0,0,132,132,132,132,132,132,132,132,132,120,
  // 0x00dc  Ü
  6,14,14,8,1,0,72,72,0,0,132,132,132,132,132,132,132,132,132,120,
  // 0x00dd  Ý
  7,14,14,8,1,0,24,96,0,0,130,130,68,68,40,16,16,16,16,16,
  // 0x00de  Þ
  6,11,11,8,1,0,128,128,240,136,132,132,136,240,128,128,128,
  // 0x00df  ß
  6,10,10,8,1,0,112,136,136,144,176,136,132,132,164,152,
  // 0x00e0  à
  6,12,12,8,1,0,96,24,0,0,120,132,4,124,132,132,140,116,
  // 0x00e1  á
  6,12,12,8,1,0,24,96,0,0,120,132,4,124,132,132,140,116,
  // 0x00e2  â
  6,12,12,8,1,0,48,72,0,0,120,132,4,124,132,132,140,116,
  // 0x00e3  ã
  6,12,12,8,1,0,100,152,0,0,120,132,4,124,132,132,140,116,
  // 0x00e4  ä
  6,12,12,8,1,0,72,72,0,0,120,132,4,124,132,132,140,116,
  // 0x00e5  å
  6,13,13,8,1,0,48,72,48,0,0,120,132,4,124,132,132,140,116,
  // 0x00e6  æ
  7,8,8,8,1,0,124,146,18,126,144,144,146,124,
  // 0x00e7  ç
  6,10,10,8,1,254,120,132,128,128,128,128,132,120,16,96,
  // 0x00e8  è
  6,12,12,8,1,0,96,24,0,0,120,132,132,252,128,128,132,120,
  // 0x00e9  é
  6,12,12,8,1,0,24,96,0,0,120,132,132,252,128,128,132,120,
  // 0x00ea  ê
  6,12,12,8,1,0,48,72,0,0,120,132,132,252,128,128,132,120,
  // 0x00eb  ë
  6,12,12,8,1,0,72,72,0,0,120,132,132,252,128,128,132,120,
  // 0x00ec  ì
  5,12,12,8,2,0,192,48,0,0,96,32,32,32,32,32,32,248,
  // 0x00ed  í
  5,12,12,8,2,0,48,192,0,0,96,32,32,32,32,32,32,248,
  // 0x00ee  î
  5,12,12,8,2,0,96,144,0,0,96,32,32,32,32,32,32,248,
  // 0x00ef  ï
  5,12,12,8,2,0,144,144,0,0,96,32,32,32,32,32,32,248,
  // 0x00f0  ð
  6,12,12,8,1,0,100,24,40,68,4,124,132,132,132,132,132,120,
  // 0x00f1  ñ
  6,12,12,8,1,0,100,152,0,0,184,196,132,132,132,132,132,132,
  // 0x00f2  ò
  6,12,12,8,1,0,96,24,0,0,120,132,132,132,132,132,132,120,
  // 0x00f3  ó
  6,12,12,8,1,0,24,96,0,0,120,132,132,132,132,132,132,120,
  // 0x00f4  ô
  6,12,12,8,1,0,48,72,0,0,120,132,132,132,132,132,132,120,
  // 0x00f5  õ
  6,12,12,8,1,0,100,152,0,0,120,132,132,132,132,132,132,120,
  // 0x00f6  ö
  6,12,12,8,1,0,72,72,0,0,120,132,132,132,132,132,132,120,
  // 0x00f7  ÷
  6,7,7,8,1,1,48,0,0,252,0,0,48,
  // 0x00f8  ø
  6,10,10,8,1,255,4,120,140,148,148,164,164,196,120,128,
  // 0x00f9  ù
  6,12,12,8,1,0,96,24,0,0,132,132,132,132,132,132,140,116,
  // 0x00fa  ú
  6,12,12,8,1,0,24,96,0,0,132,132,132,132,132,132,140,116,
  // 0x00fb  û
  6,12,12,8,1,0,48,72,0,0,132,132,132,132,132,132,140,116,
  // 0x00fc  ü
  6,12,12,8,1,0,72,72,0,0,132,132,132,132,132,132,140,116,
  // 0x00fd  ý
  6,14,14,8,1,254,24,96,0,0,132,132,132,132,132,76,52,4,4,120,
  // 0x00fe  þ
  6,13,13,8,1,254,128,128,128,184,196,132,132,132,132,196,184,128,128,
  // 0x00ff  ÿ
  6,14,14,8,1,254,72,72,0,0,132,132,132,132,132,76,52,4,4,120,
};

#endif // HAS_GRAPHICAL_TFT
