
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

  while (env.isOpen()) {
    env.setupDraw();

    drawTextureBox(miku.x, miku.y, miku.width, miku.height,
                   0, 0, miku.width, miku.height,
                   miku_image,
                   Color(1, 1, 1));

    env.update();
  }
}
