
#pragma once
#include "../common.h"


class cScene {
public:

  cScene() = default;

  virtual void update() = 0;
  virtual void draw()   = 0;
};