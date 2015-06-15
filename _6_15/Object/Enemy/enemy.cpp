
#include "enemy.h"


Enemy::Enemy(Vec2f pos) {
  this->pos = pos;
  size = Vec2f(50, 50);
  color = Color(1, 0, 0);
}


void Enemy::update() {

}

void Enemy::draw() {
  drawFillBox(pos.x(), pos.y(), size.x(), size.y(),
              color);
}