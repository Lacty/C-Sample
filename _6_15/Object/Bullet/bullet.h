
#pragma once
#include "../object.h"


class Player : public Object {
private:


public:
  Player();
  ~Player();

  void update();
  void draw();
};