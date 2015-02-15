//
// アプリ雛形
//

#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp" 
#include "time.h"

enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};

enum{
    BALL_MAX = 5
};

struct Ball{
    Vec2f point;
    Vec2f speed;
    Color color;
};

float r = 20;
float g = 0.15;

Random random;

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  // タイムの使い方がわからん
  // random.setSeed(time);

  Ball ball[BALL_MAX];
  
  for (int i = 0; i < BALL_MAX; i++){
      ball[i].point.x() = random.fromFirstToLast(-WIDTH/2, WIDTH/2);
      ball[i].point.y() = random.fromFirstToLast(-HEIGHT/2, HEIGHT/2);
      ball[i].speed.x() = random.fromFirstToLast(0.5, 2);
      ball[i].speed.y() = random.fromFirstToLast(0.5, 2);
      ball[i].color = Color(random.fromFirstToLast(0, 1), random.fromFirstToLast(0, 1), random.fromFirstToLast(0, 1));
  }
  
  while (env.isOpen()) {
      for (int i = 0; i < BALL_MAX; i++){
          ball[i].point.x() += ball[i].speed.x();
          ball[i].point.y() += ball[i].speed.y();
      }

      // 画面端での反転処理
      for (int i = 0; i < BALL_MAX; i++){
          if ((ball[i].point.x() < -WIDTH / 2) || (ball[i].point.x() > WIDTH / 2)){
              ball[i].speed.x() *= -1;
              if (ball[i].point.x() < -WIDTH / 2){
                  ball[i].point.x() = -WIDTH/2;
              }
              if (ball[i].point.x() > WIDTH / 2){
                  ball[i].point.x() = WIDTH/2;
              }
          }
          if ((ball[i].point.y() < -HEIGHT / 2) || (ball[i].point.y() > HEIGHT / 2)){
              ball[i].speed.y() *= -1;
              if (ball[i].point.y() < -HEIGHT / 2){
                  ball[i].point.y() = -HEIGHT/2;
              }
              if (ball[i].point.y() > HEIGHT / 2){
                  ball[i].point.y() = HEIGHT/2;
              }
          }
      }
      if (env.isPressKey('G')){
        for (int i = 0; i < BALL_MAX; i++){
            ball[i].speed.y() -= g;
        }
      }
    env.setupDraw();

    for (int i = 0; i < BALL_MAX; i++){
        drawPoint(ball[i].point.x(), ball[i].point.y(), r, ball[i].color);
    }

    env.update();
  }
}
