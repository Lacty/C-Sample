
#pragma once
#include "../System/environment.h"
#include "../System/scene_manager.h"
#include "../System/data_loader.hpp"
#include "scene.h"


class cGameScene : public cScene {
public:

  cGameScene(cSceneManager*);

  void update();
  void draw();


private:

  enum Fhase {
    First_Fhase = 1,
    Last_Fhase  = 5
  };
  void enemyUpdate();
  bool isGameClear();

  int m_fhase_num;
  std::string m_enemy;
  cDataLoader m_loader;

  Font m_font;
};