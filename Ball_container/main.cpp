
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp"
#include <vector>

enum Window {
  WIDTH = 512,
  HEIGHT = 512
};

Random random;

struct Ball{
  Vec2f point;
  Vec2f speed;
  Color color;
};

// ボールを一個生成
Ball createBall(Vec2f point){
  Ball ball;

  ball.point = point;

  ball.speed.x() = random.fromFirstToLast(-3.0f, 3.0f);
  ball.speed.y() = random.fromFirstToLast(-3.0f, 3.0f);

  ball.color.red() = random.fromFirstToLast(0.25f, 1.0f);
  ball.color.green() = random.fromFirstToLast(0.25f, 1.0f);
  ball.color.blue() = random.fromFirstToLast(0.25f, 1.0f);

  return ball;
}

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  std::vector<Ball> ball;

  while (env.isOpen()) {

    // 左クリックでマウスの位置にボールを作る
    if (env.isPushButton(Mouse::LEFT)){
      ball.push_back(createBall(env.mousePosition()));
    }

    bool gravity = env.isPressKey('G');

    // ball.size() ← 配列のサイズを返す
    // unsigned int i ← .size()がunsignedで返るから
    for (unsigned int i = 0; i < ball.size(); ++i){
      if (gravity){
        ball[i].speed.y() += -1.0f;
      }

      ball[i].point.x() += ball[i].speed.x();
      ball[i].point.y() += ball[i].speed.y();

      // 画面端で跳ね返る処理
      if (ball[i].point.x() < -WIDTH / 2){
        ball[i].point.x() = -WIDTH / 2;
        ball[i].speed.x() *= -1;
      }
      if (ball[i].point.x() > WIDTH / 2){
        ball[i].point.x() = WIDTH / 2;
        ball[i].speed.x() *= -1;
      }
      if (ball[i].point.y() < -HEIGHT / 2){
        ball[i].point.y() = -HEIGHT / 2;
        ball[i].speed.y() *= -1;
      }
      if (ball[i].point.y() > HEIGHT / 2){
        ball[i].point.y() = HEIGHT / 2;
        ball[i].speed.y() *= -1;
      }
    }
    env.setupDraw();

    for (unsigned int i = 0; i < ball.size(); ++i){
      drawPoint(ball[i].point.x(), ball[i].point.y(), 10, ball[i].color);
    }

    env.update();
  }
}
