
#pragma once
#include "../common.h"


class cScene {
public:

  virtual void update() = 0;
  virtual void draw()   = 0;

protected:

  cScene(const int num) : m_scene_num(num){}
  int m_scene_num;
};