
// ------------------ LIBRARIES --------------------
#include <VGAX.h>

// ------------------- INSTANCE LIBRARIES ---------------
VGAX vga;

// ------------------- TEMPORARY --------------------
#define timeChange 200

// -------------------- SPRITES -----------------
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
  int axisX;
  int axisY;
  boolean visible;
} shoot;

int shootVector = 0;
shoot shootGame[5] = {
 {0, 0, false},
 {0, 0, false},
 {0, 0, false},
 {0, 0, false},
 {0, 0, false}
};

typedef struct
{
  int axisX;
  int axisY;
  int alive;
} nave;

typedef struct
{
  int axisX;
  int axisY;
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

// ------------ FUNCTION DECLARATION ---------
void paint();
void moveAlien();

// ----------- SETUP PROGRAM -------------
void setup() {
  vga.begin();
  vga.clear(0);
}

// ----------- LOOP PROGRAM -------------
void loop() {
  paint();
  moveAlien();
  vga.delay(50);

}

void paint(){
  vga.clear(0);
  //tiro
    //TODO pintar os tiros
  //alien
  for (int i = 0; i < 8; i++) {
    if(alienGame[i].alive){
      vga.blitwmask( (byte*)(img_alien_data)[0],(byte*)(img_alien_data)[0], IMG_ALIEN_WIDTH , IMG_ALIEN_HEIGHT, alienGame[i].axisX, alienGame[i].axisY) ;
    }
  }
  //player
  if(naveGame.alive){
    vga.blitwmask( (byte*)(img_nave_data)[0],(byte*)(img_nave_data)[0], IMG_NAVE_WIDTH , IMG_NAVE_HEIGHT, naveGame.axisX, naveGame.axisY) ;
  }else{
    //TODO tela de game over
  }
}

<<<<<<< HEAD
void placePlayer(){
  vga.blitwmask( (byte*)(img_nave_data)[0],(byte*)(img_nave_data)[0], IMG_NAVE_WIDTH , IMG_NAVE_HEIGHT, 45, 50);
}

void novoTiro(){
  shootGame
  shootVector
  if(shootVector >  ){ shootVector = 0; }
}

=======
>>>>>>> 684adc8ae67f1a5f7297fc2bb94e9aa28a3fcc28

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
