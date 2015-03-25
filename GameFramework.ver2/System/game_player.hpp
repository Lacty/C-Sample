
#pragma once
#include "environment.h"
#include "scene_manager.h"


class cGamePlayer {
public:

  cGamePlayer() = default;

  void run() {
    m_manager.start();

    while (env::get()->isOpen()) {
      m_manager.update();
      m_manager.draw();
    }
  }


private:

  cSceneManager m_manager;
};