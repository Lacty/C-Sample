
#include "title.h"


cTitle::cTitle(cSceneManager* manager) :
cScene(manager) {}


void cTitle::update(){
  if (!env::get()->isPushButton(Mouse::LEFT)) return;
  m_manager->shiftNextScene(std::make_shared<cGameScene>(m_manager));
}

void cTitle::draw(){
  drawFillCircle(0, 0, 50, 50, 3, Color(1, 1, 1));
}