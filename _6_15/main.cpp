
#include "lib/framework.hpp"
#include "Object/Player/player.h"
#include "Object/Enemy/enemy.h"
#include "Collision/collision.h"
#include <list>


int main() {
  AppEnv env(640, 480);

  Player player;
  //Enemy enemy;
  std::list<Enemy> enemy;
  enemy.emplace_back(Vec2f(0, 0));
  enemy.emplace_back(Vec2f(-100, 0));
  enemy.emplace_back(Vec2f(100, 0));

  while (env.isOpen()) {
    for (auto it : enemy) {
      it.update();
    }
    //enemy.update();
    player.update(env);

    for (auto it : enemy) {
      if (isCollisionRectToRect(player.getPos(), player.getSize(),
                                it.getPos(), it.getSize())) {
        player.setColor(Color::red);
      } else {
        player.setColor(Color::white);
      }
    }

    env.begin();

    //enemy.draw();
    for (auto it : enemy) {
      it.draw();
    }
    player.draw();

    env.end();
  }
}
