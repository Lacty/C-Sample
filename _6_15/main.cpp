
#include "lib/framework.hpp"
#include "Object/Player/player.h"
#include "Object/Enemy/enemy.h"
#include "Collision/collision.h"
#include <list>


int main() {
  AppEnv env(640, 480);

  Player player;
  std::list<Enemy> enemy;
  enemy.emplace_back(Vec2f(0, 0));
  enemy.emplace_back(Vec2f(-150, 0));
  enemy.emplace_back(Vec2f(150, 0));

  while (env.isOpen()) {
    for (auto it : enemy) {
      it.update();
    }
    player.update(env);

    player.setColor(Color::white);
    for (auto it : enemy) {
      if (isCollisionRectToRect(player.getPos(), player.getSize(),
                                it.getPos(), it.getSize()))
      {
        player.setColor(Color::red);
      }
    }

    env.begin();

    for (auto it : enemy) {
      it.draw();
    }
    player.draw();

    env.end();
  }
}
