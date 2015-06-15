
#include "player.h"


Player::Player() {
  pos = Vec2f::Zero();
  size = Vec2f(50, 50);
  color = Color(1, 1, 1);
}


void Player::update(AppEnv& env) {
  const float speed = 3.f;
  if (env.isPressKey(GLFW_KEY_A)) {
    pos.x() -= speed;
  }
  if (env.isPressKey(GLFW_KEY_D)) {
    pos.x() += speed;
  }
}

void Player::draw() {
  drawFillBox(pos.x(), pos.y(), size.x(), size.y(),
              color);
}