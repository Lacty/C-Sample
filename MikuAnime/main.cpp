
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
  explicit Object(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
  }
};

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  int anime_frame = 0;
  int index = 0;
  Texture image[] = {
    Texture("res/miku_1.png"),
    Texture("res/miku_2.png"),
    Texture("res/miku_3.png"),
    Texture("res/miku_4.png"),
    Texture("res/miku_5.png"),
    Texture("res/miku_6.png"),
  };
  Object miku(-320/2, -270/2, 320, 270);

  while (env.isOpen()) {
    anime_frame += 1;

    if (env.isPressKey('A')){
      anime_frame += 3;
    }
    index = (anime_frame / 30) % 6;

    env.setupDraw();

    drawTextureBox(miku.x, miku.y, miku.width, miku.height,
                   0, 0, miku.width, miku.height,
                   image[index],
                   Color(1, 1, 1));

    env.update();
  }
}
