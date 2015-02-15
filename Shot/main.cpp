
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/utils.hpp"

enum Window {
  WIDTH  = 512,
  HEIGHT = 256
};

enum {
  SHOT_MAX = 10
};

struct Shot{
  bool active;
  Vec2f point;
};

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  Shot shots_data[SHOT_MAX];
  const int ShotSpeed = 2;

  // 初期化処理
  // すべて未使用にする
  for (int i = 0; i < elemsof(shots_data); ++i){
    shots_data[i].active = false;
  }

  while (env.isOpen()) {

    bool isClick = env.isPushButton(Mouse::LEFT);

    for (int i = 0; i < elemsof(shots_data); ++i){
      if (isClick){

        // 生きてない弾を検索検索♪
        if (!shots_data[i].active){
          shots_data[i].active = true;

          shots_data[i].point = Vec2f(0, - HEIGHT / 3);
          break;
        }
      }
    }

    for (int i = 0; i < elemsof(shots_data); ++i){
      // 移動制御
      if (shots_data[i].active){
        shots_data[i].point.y() += ShotSpeed;

        // 画面外に出たら弾を消す処理
        if (shots_data[i].point.y() > HEIGHT / 2){
          shots_data[i].active = false;
        }
      }
    }

    env.setupDraw();

    for (int i = 0; i < elemsof(shots_data); ++i){
      drawPoint(shots_data[i].point.x(), shots_data[i].point.y(), 10, Color(1, 1, 1));
    }

    env.update();
  }
}
