
#include "common.h"
#include "Ball.h"


int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
  cBall ball(env);

  while (env.isOpen()) {
    ball.Update();

    env.setupDraw();
    ball.Draw();

    env.update();
  }
}
