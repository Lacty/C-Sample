
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"


enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};



int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  while (env.isOpen()) {
    env.setupDraw();

    

    env.update();
  }
}
