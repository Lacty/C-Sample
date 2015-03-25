
#pragma once
#include "common.h"
#include "../System/scene_manager.h"


class cGamePlayer {
public:

  cGamePlayer() = default;

  void run(){
    m_scene.update();
    m_scene.draw();
  }


private:

  cSceneManager m_scene;
};