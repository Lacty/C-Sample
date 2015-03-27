
#include "game_scene.h"


cGameScene::cGameScene(cSceneManager* manager) :
cScene(manager),
m_fhase_num(First_Fhase),
m_font("res/mplus12r.ttf") {}


void cGameScene::update(){
  if (env::get()->isPushButton(Mouse::LEFT)){
    enemyUpdate();
  }

  if (isGameClear()){
    m_manager->shiftNextScene(std::make_shared<cTitle>(m_manager));
  }
}

void cGameScene::draw(){
  drawFillCircle(0, 0, 50, 50, m_fhase_num, Color(1, 0, 1));

  // const float info_x = WindowSize::WIDTH / 2;
  // const float info_y = WindowSize::HEIGHT / 2;
  // m_font.draw(m_enemy, Vec2f(info_x, info_y), Color::white);
}

void cGameScene::enemyUpdate(){
  ++m_fhase_num;
  if (isGameClear()) return;

  m_enemy = m_loader.output(m_fhase_num);
}

bool cGameScene::isGameClear(){
  return m_fhase_num > Last_Fhase;
}