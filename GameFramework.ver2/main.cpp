
#include "common.hpp"


int main() {
  AppEnv env(WIDTH, HEIGHT);

  while (env.isOpen()) {
    env.begin();

    env.end();
  }
}
