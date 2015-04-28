
#include "lib/framework.hpp"


int main() {
  AppEnv env(600, 400);

  Color color(1, 0, 0);

  while (env.isOpen()) {
    env.begin();

    Vec2f pos = env.mousePosition();

    if (env.isPressButton(Mouse::LEFT)) {
      color = Color(1, 1, 1);
    } else {
      color = Color(1, 0, 0);
    }
      drawFillBox(pos.x() - 25, pos.y() - 25,
                  50, 50, color);
    env.end();
  }
}
