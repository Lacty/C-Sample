
#pragma once
#include "object.h"

/*
  あたり判定用の関数を置いています
  const参照はまだ早い気がしたので
  コピーで値を持ってくるようにしています
*/

bool isCollision(Object obj1, Object obj2) {
  if (obj1.pos.x() < obj2.pos.x() + obj2.size.x()) {
    if (obj1.pos.x() + obj1.size.x() > obj2.pos.x()) {
      if (obj1.pos.y() < obj2.pos.y() + obj2.size.y()) {
        if (obj1.pos.y() + obj1.size.y() > obj2.pos.y()) {
          return true;
        }
      }
    }
  }
  return false;
}
