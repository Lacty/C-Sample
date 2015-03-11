
#include "common.h"


int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  
  while (env.isOpen()) {
    env.setupDraw();

    

    env.update();
  }
}
