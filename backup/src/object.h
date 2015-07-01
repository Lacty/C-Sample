
#pragma once
#include "lib/framework.hpp"

/*
  構造体を置いているので
  objectというファイル名にしました
*/

enum Direction {
  Left = -1,
  Right = 1
};

struct Object {
  Direction dir;
  Vec2f pos;
  Vec2f size;
  Color color;
};

struct Shot {
  Direction dir;
  bool active;
  Vec2f pos;
  Vec2f size;
  Color color;
};