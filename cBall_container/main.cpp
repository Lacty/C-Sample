
#include "common.h"
#include "float2.h"
#include "lib/random.hpp"
#include <ctime>

#include "Ball.h"


int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
  
  Random random;
  random.setSeed(u_int(time(nullptr)));

  float2 mouse_pos = float2::Zero();

  std::vector<cBall> balls;
  enum { BALL_MAX = 10 };

  while (env.isOpen()) {
    mouse_pos = float2(env.mousePosition().x(),
                       env.mousePosition().y());

    if (env.isPushButton(Mouse::LEFT) && balls.size() < BALL_MAX){
      balls.push_back(cBall(random, mouse_pos));
    }

    for (auto& it : balls){
      it.Update();

      if (env.isPressKey('G')){
        it.Gravity();
      }
    }

    env.setupDraw();

    for (auto& it : balls){
      it.Draw();
    }

    env.update();
  }
}
