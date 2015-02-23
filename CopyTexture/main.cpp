
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"

enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};

struct Object{
  int x;
  int y;
  int width;
  int height;
  Object(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
  }
};


int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
  
  Object miku(-256/2, -256/2, 256, 256);

  Texture image[3];
  image[0] = Texture("res/miku1.png");
  image[1] = Texture("res/miku2.png");
  image[2] = Texture("res/miku3.png");

  int index = 0;

  while (env.isOpen()) {
    if (env.isPushKey('1')){ index = 0; }
    if (env.isPushKey('2')){ index = 1; }
    if (env.isPushKey('3')){ index = 2; }

    env.setupDraw();

    drawTextureBox(miku.x, miku.y, miku.width, miku.height,
                   0, 0, miku.width, miku.height,
                   image[index],
                   Color(1, 1, 1));
    
    env.update();
  }
}
