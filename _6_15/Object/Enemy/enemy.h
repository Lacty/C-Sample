
#pragma once
#include "../object.h"


class Enemy : public Object {
private:


public:
  Enemy(Vec2f pos);
  ~Enemy() = default;

  void update();
  void draw();
};