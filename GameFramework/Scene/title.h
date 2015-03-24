
#pragma once
#include "scene.hpp"


class cTitle : public cScene {
public:

  cTitle();

  void update();
  void draw();
  
  short getSelectedNum();


private:

  short m_select_num;
};