
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"

enum Window {
  WIDTH = 512,
  HEIGHT = 512
};


int main()
{
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  float angle = 0;

  while (env.isOpen()){
    env.setupDraw();

    angle -= 0.05f;

    drawFillCircle(0, 0, 40, 40, 3,
      Color(1, 1, 1),
      angle,
      Vec2f(1, 1),
      Vec2f(0, 0)); // Vec2f(0, 50);にすると変化がわかる


    env.update();
  }
}
