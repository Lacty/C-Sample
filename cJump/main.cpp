
#include "common.h"
#include "Player/Player.h"


int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  cPlayer player(env);
  
  while (env.isOpen()) {
    player.Update();

    env.setupDraw();
    player.Draw();

    env.update();
  }
}
