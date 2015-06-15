
#pragma once
#include "../lib/framework.hpp"


class Object {
protected:
  Vec2f pos;
  Vec2f size;
  Color color;

public:
  Object();
  virtual ~Object() = default;
  
  Vec2f getPos();
  Vec2f getSize();

  virtual void update() {};
  virtual void draw() {};
};