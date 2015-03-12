
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include <vector>

enum Window {
  WIDTH  = 256,
  HEIGHT = 512
};

enum shotStatus{
  INIT_POS_X  =    0,
  INIT_POS_Y  = -200,
  INIT_RADIUS =   10,

  SHOT_MAX = 5,
  SHOT_SPEED = 20,

  KILL_LINE = HEIGHT / 2
};

class cShot{
private:
  float x;
  float y;
  float r;
  Color color;

public:
  cShot() :x(INIT_POS_X), y(INIT_POS_Y),
           r(INIT_RADIUS), color(Color(1, 1, 1)){}

  void Move(){
    y += SHOT_SPEED;
  }
  bool Kill(){
    return y > KILL_LINE;
  }
  void Draw(){
    drawPoint(x, y, r, color);
  }
};

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  std::vector<cShot> shots;

  while (env.isOpen()) {
    if (env.isPullButton(Mouse::LEFT) && shots.size() < SHOT_MAX){
      shots.push_back(cShot());
    }

    for (auto& it : shots){
      it.Move();
    }

    for (auto it = shots.begin(); it != shots.end(); ++it){
      if (it->Kill()){
        shots.erase(it);
        break;
      }
    }
      
    env.setupDraw();

    for (auto it : shots){
      it.Draw();
    }

    env.update();
  }
}
