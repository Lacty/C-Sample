
#include "lib/framework.hpp"

enum WindowSize {
  WIDTH  = 512,
  HEIGHT = 512,
};


int main() {
  AppEnv env(WIDTH, HEIGHT);

  enum MapArray {
    Map_Y = 5,
    Map_X = 5
  };
  int map[Map_Y][Map_X] =
  {
    { 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1 },
    { 2, 2, 2, 2, 2 },
    { 3, 3, 3, 3, 3 },
    { 4, 4, 4, 4, 4 }
  };

  while (env.isOpen()) {
    env.begin();

    env.end();
  }
}
