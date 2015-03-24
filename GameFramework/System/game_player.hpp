
#pragma once
#include "common.h"
#include "../Scene/title.h"


class cGamePlayer {
public:

  cGamePlayer() {}

  void run(){
    m_title.update();
    m_title.draw();
  }


private:

  cTitle m_title;
};