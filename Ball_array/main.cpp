//
// アプリ雛形
//

#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp"


enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};

enum{
    BALL_MAX = 10
};

struct Ball{
    bool active;
    Vec2f point;
    Vec2f speed;
    Color color;
};

int r = 20;
float g = -0.5;

Random random;
bool isClick;

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  Ball ball[BALL_MAX];
  // 初期化
  for (int i = 0; i < BALL_MAX; i++){
      ball[i].active = false;
  }

  while (env.isOpen()) {
      if (env.isPushButton(LEFT)){
        isClick = true;
      }

	  for (int i = 0; i < BALL_MAX; i++){
		  if (isClick){
			  if (!ball[i].active){
				  ball[i].active = true;

				  // .x() = env.mousePosition.x();
				  // ができないのはなぜだろう、おしえてTomさん
				  ball[i].point = env.mousePosition();

				  // 0.5が0になるのか？動かない弾がでてくる
				  ball[i].speed.x() = random.fromFirstToLast(-3.0f, 3.0f);
				  ball[i].speed.y() = random.fromFirstToLast(-3.0f, 3.0f);

				  ball[i].color.red() = random.fromFirstToLast(0.25f, 1.0f);
				  ball[i].color.blue() = random.fromFirstToLast(0.25f, 1.0f);
				  ball[i].color.green() = random.fromFirstToLast(0.25f, 1.0f);

				  isClick = false;
				  break;
			  }
		  }
	  }
	  for (int i = 0; i < BALL_MAX; i++){
          if (ball[i].active){
              ball[i].point.x() += ball[i].speed.x();
              ball[i].point.y() += ball[i].speed.y();

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

              if (env.isPressKey('G')){
                  ball[i].speed.y() += g;
              }
          }
      }
    env.setupDraw();

    for (int i = 0; i < BALL_MAX; i++){
        if (ball[i].active){
            drawPoint(ball[i].point.x(), ball[i].point.y(), r, ball[i].color);
        }
    }

    env.update();
  }
}
