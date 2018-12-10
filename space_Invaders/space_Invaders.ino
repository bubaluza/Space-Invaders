#include <VGAX.h>

VGAX vga;


//image generated from 2BITIMAGE - by Sandro Maffiodo
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



#define timeChange 200
int i;
void placeAlien();
void moveAlien();


void setup() {
  vga.begin();
  vga.clear(0);
  placeAlien();

  
}

void loop() {  
  moveAlien();
  

}

void placePlayer(){
  vga.blitwmask( (byte*)(img_nave_data)[0],(byte*)(img_nave_data)[0], IMG_NAVE_WIDTH , IMG_NAVE_HEIGHT, 45, 50);
}


void placeAlien(){
  vga.blitwmask( (byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 20, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 30, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 40, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 50, 0) ;
  
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 20, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 30, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 40, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, 50, 10) ;
  i=0;
}

void moveAlien(){

  for(i;(i+60)<80;i++){
  vga.clear(0);
  placePlayer();
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+20, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+30, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+40, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+50, 0) ;
  
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+20, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+30, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+40, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+50, 10) ;
  vga.delay(timeChange);
  }
    for(i;((i+20)!=0);i--){
  vga.clear(0);
  placePlayer();
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+20, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+30, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+40, 0) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+50, 0) ;
  
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+20, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+30, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+40, 10) ;
  vga.blitwmask((byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, i+50, 10) ;
  vga.delay(timeChange);
  }
}
