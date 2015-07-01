
#pragma once
#include "object.h"

/*
  �����蔻��p�̊֐���u���Ă��܂�
  const�Q�Ƃ͂܂������C�������̂�
  �R�s�[�Œl�������Ă���悤�ɂ��Ă��܂�
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
