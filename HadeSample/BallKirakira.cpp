
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp"


enum Window {
  WIDTH  = 512,
  HEIGHT = 256
};

struct Object{
  float x;
  float y;
  float r;
  float red;
  float green;
  float blue;
}ball;

void Init(){
  ball.x = 0.0f;
  ball.y = 0.0f;
  ball.r = 10.0f;
}

Random r;

void HadeUpdate(){
  ball.x = r.fromFirstToLast(-WIDTH * 0.5f, WIDTH * 0.5f);
  ball.y = r.fromFirstToLast(-HEIGHT * 0.5f, HEIGHT * 0.5f);
  ball.red = r.fromFirstToLast(0.0f, 1.0f);
  ball.green = r.fromFirstToLast(0.0f, 1.0f);
  ball.blue = r.fromFirstToLast(0.0f, 1.0f);
  ball.r = r.fromFirstToLast(0.0f, 200.0f);
}

void HadeDraw(){
  drawFillCircle(ball.x, ball.y,
                 ball.r, ball.r,
                 100,
                 Color(ball.red, ball.green, ball.blue));
}

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
  
  Init();

  while (env.isOpen()) {
    HadeUpdate();

    env.setupDraw();

    HadeDraw();

    env.update();
  }
}
