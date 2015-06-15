
#include "collision.h"


bool isCollisionRectToRect(const Vec2f& obj_p1,
                           const Vec2f& obj_s1,
                           const Vec2f& obj_p2,
                           const Vec2f& obj_s2)
{
  if (obj_p1.x() < obj_p2.x() + obj_s2.x()) {
    if (obj_p1.x() + obj_s1.x() > obj_p2.x()) {
      if (obj_p1.y() < obj_p2.y() + obj_s2.y()) {
        if (obj_p1.y() + obj_s1.y() > obj_p2.y()) {
          return true;
        }
      }
    }
  }
  return false;
}
                           