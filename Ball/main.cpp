//
// アプリ雛形
//

#include "lib/defines.hpp"
#include "lib/appEnv.hpp"


enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};

Vec2f point = Vec2f(0, 0);
int r = 30;
Vec2f speed = Vec2f(2, 3);

float g  = 0.2f;

void PointMove(){
    point.x() += speed.x();
    
    if ((point.x() > WIDTH / 2)||(point.x() < -WIDTH/2)){
        speed.x() *= -1;
        if (point.x() > WIDTH / 2){
            point.x() = WIDTH / 2;
        }
        if (point.x() < -WIDTH / 2){
            point.x() = -WIDTH/2;
        }
    }

    point.y() += speed.y();
    if ((point.y() > HEIGHT / 2) || (point.y() < -HEIGHT / 2)){
        speed.y() *= -1;
        if (point.y() > HEIGHT / 2){
            point.y() = HEIGHT/2;
        }
        if (point.y() < -HEIGHT / 2){
            point.y() = -HEIGHT/2;
        }
    }
}

void PlayerGravidy(){
    speed.y() -= g;
}

// 
// メインプログラム
// 
int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  while (env.isOpen()) {
      PointMove();
      if (env.isPressKey('G')){
          PlayerGravidy();
      }
    env.setupDraw();

    drawPoint(point.x(), point.y(), r, Color(1, 1, 1));
    
    env.update();
  }
}
