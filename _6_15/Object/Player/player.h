
#pragma once
#include "../object.h"


class Player : public Object {
private:


public:
  Player();
  ~Player() = default;

  void setColor(const Color& color) {
    this->color = color;
  }

  void update(AppEnv& env);
  void draw();
};