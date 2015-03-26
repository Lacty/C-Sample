
#include "game_scene.h"


cGameScene::cGameScene(cSceneManager* manager) :
cScene(manager) {}


void cGameScene::update(){
  
}

void cGameScene::draw(){
  drawFillCircle(0, 0, 50, 50, 4, Color(1, 1, 1));
}