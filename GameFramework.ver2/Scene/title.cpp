
#include "title.h"


cTitle::cTitle(cSceneManager* manager) :
cScene(manager) {}


void cTitle::update(){

}

void cTitle::draw(){
  drawFillCircle(0, 0, 50, 50, 3, Color(1, 1, 1));
}