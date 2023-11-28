/*

 DOUKUTSU.H

 Include File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 16 x 16
  Tiles                : 0 to 12

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 4 Bits per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/

#ifndef __doukutsu_h_INCLUDE
#define __doukutsu_h_INCLUDE

/* Bank of tiles. */
#define doukutsuTileBank 0


/* Gameboy Color palette 0 */
#define doukutsuTileCGBPal0c0 32767
#define doukutsuTileCGBPal0c1 25169
#define doukutsuTileCGBPal0c2 20910
#define doukutsuTileCGBPal0c3 13544

/* Gameboy Color palette 3 */
#define doukutsuTileCGBPal3c0 21137
#define doukutsuTileCGBPal3c1 19022
#define doukutsuTileCGBPal3c2 15850
#define doukutsuTileCGBPal3c3 13705

/* Gameboy Color palette 4 */
#define doukutsuTileCGBPal4c0 17971
#define doukutsuTileCGBPal4c1 12686
#define doukutsuTileCGBPal4c2 9515
#define doukutsuTileCGBPal4c3 3304

/* Gameboy Color palette 5 */
#define doukutsuTileCGBPal5c0 32767
#define doukutsuTileCGBPal5c1 8935
#define doukutsuTileCGBPal5c2 6596
#define doukutsuTileCGBPal5c3 0

/* CGBpalette entries. */
extern const unsigned char doukutsuTileCGB[];
/* Start of tile array. */
extern const unsigned char doukutsuTile[];

extern const unsigned char doukutsu[];

extern const unsigned char douketsuColor[];

#endif

/* End of DOUKUTSU.H */
