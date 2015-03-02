
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"


enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};

struct Object{
  float x;
  float y;
  float width;
  float height;
  Object(float x, float y, float width, float height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
  }
};

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  Texture miku_image("res/miku.png");
  Object miku(-256/2, -256/2, 256, 256);

  float angle = 0;
  float angle_x = 0;

  while (env.isOpen()) {
    env.setupDraw();

    angle += 0.1;
    angle_x = std::sin(angle) * 10;

    drawTextureBox(miku.x + angle_x, miku.y, miku.width, miku.height,
                   0, 0, miku.width, miku.height,
                   miku_image,
                   Color(1, 1, 1));

    env.update();
  }
}
