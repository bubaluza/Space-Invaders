// ------------------ LIBRARIES --------------------
#include <VGAX.h>

// ------------------- INSTANCE LIBRARIES ---------------
VGAX vga;


// ------------------- TEMPORARY --------------------


// -------------------- SPRITES -----------------
//image generated from 2BITIMAGE - by Sandro Maffiodo
#define IMG_MENU_WIDTH 120
#define IMG_MENU_BWIDTH 30
#define IMG_MENU_HEIGHT 60
//data size=1800 bytes
const unsigned char img_menu_data[IMG_MENU_HEIGHT][IMG_MENU_BWIDTH] PROGMEM={
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 255, 255, 240,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0, 254, 170, 170, 252,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   3, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 255, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   1, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 255, 255, 192,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,  63, 240,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 240,   0,   0,   0,   0,   0,  16,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   3, 255, 252,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   3, 255, 255,   0,   0,   1,   0,   0,   0,   0,   0, },
{   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 255, 255, 192,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,  63, 255, 255, 240,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 252,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 168,  42, 128,  32,  10, 130, 168,   0,   0,   0,   0,   0,   0,   0,   3, 255, 255, 255, 255, 192,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 130,  32,  32, 168,  40,  34,   0,   0,   0,   0,   0,   0,   0,   0,  15, 255, 255, 255, 255, 240,   0,   0,   0,   0,   0,  16, },
{   0,   0,   0,   0, 128,  32,  32, 136,  32,   2,   0,   0,   0,   0,   0,   0,   0,   0,  63, 255, 255, 255, 255, 252,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  40,  42, 128, 136,  32,   2, 168,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 251, 252,   0,   0,   0,   4,   0,   0, },
{   0,   0,   0,   0,   2,  32,   2, 170,  32,   2,   0,   0,   0,   0,  16,   0,   0,   3, 255, 255, 255, 255, 250,  60,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 130,  32,   2,   2,  40,  34,   0,   0,   0,   0,   0,   0,   0,  15, 255, 255, 250, 138, 186, 191, 241,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 168,  32,   2,   2, 138, 162, 168,   0,   0,   0,   0,   0,   0,  63, 255, 255, 170,  40, 170, 191, 252,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 255, 248, 162, 170, 143, 255, 252,   0,   0,   0,   0,   0, },
{   0,   2,  10,  10, 160,  32,  32,  42, 160, 170,  42, 130, 160,   0,   0,   0,   0,  63, 255, 235, 170, 226,  63, 255, 252,   0,   0,   0,   0,   0, },
{   0,   2,  10,  10,  32,  32, 168,  32,  32, 128,  32, 162,   8,   0,   0,   0,   0,  63, 255, 207,  42,  42, 191, 255, 252,   0,   0,   0,   0,   0, },
{   0,   2,   8, 138,  32, 160, 136,  32,   8, 128,  32, 162,   0,   0,   0,   0,   0, 255, 255, 255, 251, 254, 255, 255, 252,   0,   0,   0,   0,   0, },
{   0,   2,   8, 170,   8, 128, 136,  32,   8, 170,  42, 128, 160,   0,   0,   0,   0,  63, 255, 255, 251, 252, 255, 255, 255,   0,   0,   0,   0,   0, },
{   0,   2,   8,  42,   8, 130, 170,  32,   8, 128,  32, 128,  72,   0,   0,   0,   0,  15, 255, 255, 251, 254, 255, 255, 255,   0,   0,   0,   0,   0, },
{   0,   2,   8,  42,  10, 130,   2,  32,  36, 128,  32, 162,   8,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0, },
{   0,   2,  72,  10,   2,   2,   2, 170, 128, 170,  32,  34, 160,   0,   0,   0,   0,   0,   3, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 255, 255, 255, 255, 252,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 255, 255, 255, 255, 240,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,  15, 255, 255, 240,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0, 170,  10, 160, 170,  42,  10, 128,  42,  42, 168,  32,  42, 138, 170,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0, 128, 136,  40, 128,  32, 136,  32,  32, 130,   0, 168,  32, 160, 128,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   4, 128, 136,  40, 128,  32,   8,   0,  32,   2,   0, 136,  32, 160, 128,   0,   0,   0,   0,   4,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0, 170,  10, 160, 170,  10,   2, 128,  10,   2,   0, 136,  42, 128, 128,   0,   0,   0,   0,   0,   0,   0,  64, },
{   0,   0,   0,   0,   0,   0,   0,   0, 128,   8,  32, 128,   0, 128,  32,   0, 130,   2, 170,  32, 136, 128,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0, 128,   8,  40, 128,  32, 136,  32,  32, 130,   2,   2,  32, 162, 128,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  64,   0,   0,   0, 128,   8,   8, 170,  42,  10, 128,  42,   2,   2,   2, 160,  32, 128,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
};

//image generated from 2BITIMAGE - by Sandro Maffiodo
#define IMG_GAMEOVER_WIDTH 120
#define IMG_GAMEOVER_BWIDTH 30
#define IMG_GAMEOVER_HEIGHT 40
//data size=1200 bytes
const unsigned char img_gameover_data[IMG_GAMEOVER_HEIGHT][IMG_GAMEOVER_BWIDTH] PROGMEM={
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0, 170, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   2, 128, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,  10,   0,   0, 170,  10, 168, 170,   2, 168,   0,  10, 160,  32,  40,  42, 128, 170,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   8,   0,   2,   2,  10,  10, 130,   2,   2,   0,  40,   8,  32,  40,  32,  32, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   8,  10, 128,   2,  10,   2,   2,  10,   2, 128,  32,  10,  40,  32, 160,  40, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   8,   0, 128, 170,  10,   2,   2,  10, 170, 128,  32,  10,   8, 160, 170, 168, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,  10,   0, 130,   2,  10,   2,   2,   8,   0,   0,  32,  10,   8, 128, 128,   0, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   2, 128, 130,   2,  10,   2,   2,  10,   0,   0,  40,   8,  10, 128, 160,   0, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0, 170, 128, 170,  10,   2,   2,   2, 170,   0,  10, 160,   2, 128,  42, 160, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   2,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0, 168,  42,  10, 162, 162, 168,  42,  42,   2,   8,  42,   8,   8, 168,   0,   8, 138, 130, 162, 168,  10, 160, 128, 128, 162, 160,   0,   0, },
{   0,   0, 128, 128, 136,   2,   0,   8,  32,  32,   2,   8, 128, 136,   8, 128,   2,  32, 136,  34,   2,   8,   8,   0,  32, 160, 162,   0,   0,   0, },
{   0,   0, 128, 170, 130, 130,   2, 168,  32,  32,   2,  32, 128, 136,   8, 128,   2,  32, 136,  34, 130,   8,   0, 162,  32, 162,  34, 128,   0,   0, },
{   0,   0, 128, 128,   0,  34, 130,   8,  32,  40,   0, 160, 128, 136,  40, 128,   0, 160, 136,  34,   2,   8,   8,  34, 160, 138,  34,   0,   0,   0, },
{   0,   0, 128,  42, 138, 128, 162, 168,  32,  10,   0, 160,  42,   2, 168, 128,   0, 128, 138, 130, 162, 168,  10, 160,   8, 136,  34, 160,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
};





#define IMG_ALIEN_WIDTH 10
#define IMG_ALIEN_BWIDTH 3
#define IMG_ALIEN_HEIGHT 10
//data size=30 bytes
const unsigned char img_alien_data[IMG_ALIEN_HEIGHT][IMG_ALIEN_BWIDTH] PROGMEM={
{   0,   0,   0, },
{   0, 160,   0, },
{   2, 168,   0, },
{  10, 170,   0, },
{  43, 174, 128, },
{  42, 170, 128, },
{   8, 162,   0, },
{  32,   0, 128, },
{   8,   2,   0, },
{   0,   0,   0, },
};




#define IMG_SHOOT_WIDTH 1
#define IMG_SHOOT_BWIDTH 1
#define IMG_SHOOT_HEIGHT 3
//data size=3 bytes
const unsigned char img_shoot_data[IMG_SHOOT_HEIGHT][IMG_SHOOT_BWIDTH] PROGMEM={
{ 192, },
{ 192, },
{ 192, },
};

#define IMG_NAVE_WIDTH 11
#define IMG_NAVE_BWIDTH 3
#define IMG_NAVE_HEIGHT 10
//data size=30 bytes
const unsigned char img_nave_data[IMG_NAVE_HEIGHT][IMG_NAVE_BWIDTH] PROGMEM={
{   0,   0,   0, },
{   0,  48,   0, },
{   0,  16,   0, },
{   0,  84,   0, },
{   1,  85,   0, },
{   5, 101,  64, },
{   5,  33,  64, },
{   4,   0,  64, },
{   8,   0, 128, },
{  42,   2, 160, },
};

// ------------------------------  STRUCTS DECLARATION ---------------------------------------------------------
typedef struct
{
  byte axisX;
  byte axisY;
  boolean visible;
} shoot;

shoot shootGameNave[5] = {
 {0, 0, false},
 {0, 0, false},
 {0, 0, false},
 {0, 0, false},
 {0, 0, false}
};

shoot shootGameAlien[3] = {
 {0, 0, false},
 {0, 0, false},
 {0, 0, false}
};

typedef struct
{
  byte axisX;
  byte axisY;
  byte alive;
} nave;

typedef struct
{
  byte axisX;
  byte axisY;
  boolean alive;
} alien;

// ------------ STRUCTS INSTANCE ----------------
nave naveGame = { 45, 50, true };

 alien alienGame[8] = {
  {20, 0, true},
  {30, 0, true},
  {40, 0, true},
  {50, 0, true},
  {20, 10, true},
  {30, 10, true},
  {40, 10, true},
  {50, 10, true}
};

// ------------ FLAGS ------------------
bool guidance=0;      //0 right 1 left
byte dfc=0;

// ------------ FUNCTION DECLARATION ---------
void paint();
void placePlayer();
void newShootNave();
void newShootAlien();
void moveNave();
void moveAlien();
void moveShoot();


// ----------- SETUP PROGRAM -------------
void setup() {

  vga.begin();
  vga.clear(0);
  vga.copy((byte*)img_menu_data);
  while(analogRead(5)>100);



}

// ----------- LOOP PROGRAM -------------
void loop() {
  placeAlien();
  paint();
  moveNave();
  moveShoot();
  moveShoot();
  paint();
  moveNave();
  moveNave();
  paint();
  for(byte i=0;i<dfc;i++){
    moveShoot();
    moveAlien();
    newShootAlien();
    if(i%2==0)
      paint();
  }
  moveNave();
 
  moveNave();
  moveNave();
  moveNave();
  newShootNave();
  moveAlien();
  moveShoot();
}

void paint(){
  vga.clear(0);
  //alien
  for (byte i = 0; i < 8; i++) {
    if(alienGame[i].alive){
      vga.blitwmask( (byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, alienGame[i].axisX, alienGame[i].axisY) ;
    }
  }
  //Nave shoot
  for( byte i = 0;i<5;i++){
    if(shootGameNave[i].visible){
      vga.blitwmask( (byte*)(img_shoot_data)[0],(byte*)(img_shoot_data)[0], IMG_SHOOT_WIDTH , IMG_SHOOT_HEIGHT, shootGameNave[i].axisX, shootGameNave[i].axisY) ;
    }
  }
  //Alien shoot
  for( byte i = 0;i<3;i++){
    if(shootGameAlien[i].visible){
      vga.blitwmask( (byte*)(img_shoot_data)[0],(byte*)(img_shoot_data)[0], IMG_SHOOT_WIDTH , IMG_SHOOT_HEIGHT, shootGameAlien[i].axisX, shootGameAlien[i].axisY) ;
    }
  }
  //player
  if(naveGame.alive){
    vga.blitwmask( (byte*)(img_nave_data)[0],(byte*)(img_nave_data)[0], IMG_NAVE_WIDTH , IMG_NAVE_HEIGHT, naveGame.axisX, naveGame.axisY) ;
  }else{
    vga.blitwmask( (byte*)(img_gameover_data)[0],(byte*)(img_gameover_data)[0], IMG_GAMEOVER_WIDTH , IMG_GAMEOVER_HEIGHT, 0, 25) ;
  }
}



void placePlayer(){
  vga.blitwmask( (byte*)(img_nave_data)[0],(byte*)(img_nave_data)[0], IMG_NAVE_WIDTH , IMG_NAVE_HEIGHT, 45, 50);
}



void newShootNave(){
  if(naveGame.alive==true){
  byte readButtom = analogRead(5);
  if(readButtom < 100) 
  for (byte i = 0; i < 5; i++) {
    if (!shootGameNave[i].visible) {
      shootGameNave[i] = { naveGame.axisX+5, naveGame.axisY-1, true };
     
      break;
    }
  }
}
}

void newShootAlien(){
  int alienRand = random(0, 7);
  if (alienGame[alienRand].alive) {
    for (byte i = 0; i < 3; i++) {
      if (!shootGameAlien[i].visible) {
        shootGameAlien[i] = { alienGame[alienRand].axisX+4, alienGame[alienRand].axisY+10, true }; //+4 +10  
        break;
      }
    }
  }
}

void moveNave(){
  int valor = analogRead(1);
  naveGame.axisX=(map(valor,0, 1023, 0 , 80));
}

void moveAlien(){
  if( (alienGame[3].axisX+1) ==80 ){
    guidance=1;
  } else if(  (alienGame[0].axisX-1) == 0  ){
    guidance=0;
  }
  if(guidance==0){
    for(byte j=0;j<8;j++){
    alienGame[j].axisX++;
    }
  }
  if(guidance==1){
    for(byte j=0;j<8;j++){
    alienGame[j].axisX--;
    }
  }
}

void moveShoot(){
  for(byte i=0;i<5;i++){
    if(shootGameNave[i].visible){
      if( (shootGameNave[i].axisY -1) == -1)
        shootGameNave[i].visible=false;
        else shootGameNave[i].axisY--;
    }
  }
  detectCollisionAlien();

  for(byte i=0;i<3;i++){
    if(shootGameAlien[i].visible){
        if( (shootGameAlien[i].axisY +1) == 60)
          shootGameAlien[i].visible=false;
          else shootGameAlien[i].axisY++;
    }
  }
  detectCollisionNave();
}

void detectCollisionNave(){
  for (byte i = 0; i < 3; i++) {
    if (shootGameAlien[i].visible) {
      for (byte w = 1; w+1 < IMG_NAVE_WIDTH; w++) {
        for (byte h = 1; h+1 < IMG_NAVE_HEIGHT; h++) {
          if((naveGame.axisX+w) == shootGameAlien[i].axisX && (naveGame.axisY+h) == shootGameAlien[i].axisY ){
            naveGame.alive = false;
            shootGameAlien[i].visible=false;
            return;
          }
        }
      }
    }
  }
}

void detectCollisionAlien(){
  for (byte i = 0; i < 5; i++) {
    if(shootGameNave[i].visible){
      for (byte a = 0; a < 8; a++) {
        if (alienGame[a].alive) {
          for (byte w = 1; w+1 < IMG_ALIEN_WIDTH; w++) {
            for (byte h = 1; h+1 < IMG_ALIEN_HEIGHT; h++) {
              if((alienGame[a].axisX+w) == shootGameNave[i].axisX && (alienGame[a].axisY+h) == shootGameNave[i].axisY){
                alienGame[a].alive = false;
                shootGameNave[i].visible=false;
                break;
              }
            }
          }
        }
      }
    }
  }
}

void placeAlien(){
  byte i=0;
  for(i=0;i<8;i++){
    if(alienGame[i].alive==true){
      i=-1;
      return;
    }
  }
 
    for(i=0;i<4;i++){
      alienGame[i].axisX=(i+2)*10;
      alienGame[i].alive=true;
    }
    for(i=0;i<4;i++){
      alienGame[i+4].axisX=(i+2)*10;
      alienGame[i+4].alive=true;
    }
    dfc++;

}
