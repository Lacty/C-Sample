
#pragma once
#include "lib/framework.hpp"

/*
  �\���̂�u���Ă���̂�
  object�Ƃ����t�@�C�����ɂ��܂���
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