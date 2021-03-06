﻿
//
// Shot using List
//

#include "lib/framework.hpp"
#include <list>

enum WindowSize {
  WIDTH = 512,
  HEIGHT = 512,
};

enum ShotStatus {
  Init_Pos_X = 0,
  Init_Pos_Y = -200,

  Shot_Speed = 20,

  Active = 1,
  Inactive = 0,

  Radius = 5,

  Kill_Line = HEIGHT / 2
};


int main() {
  AppEnv env(WIDTH, HEIGHT);

  struct Shot {
    ShotStatus status;
    Vec2f      pos;

    Shot(const ShotStatus& stat, const Vec2f& position) :
    status(stat),
    pos(position){}
  };

  std::list<Shot> shots;

  while (env.isOpen()) {
    // 生成処理
    if (env.isPushButton(Mouse::LEFT)) {
      shots.push_back({ Active, Vec2f(Init_Pos_X, Init_Pos_Y) });
    }

    // 発射処理
    for (auto &it : shots) {
      if (it.status == Active) {
        it.pos.y() += Shot_Speed;
      }
    }

    // 画面外に出たら消す処理
    auto &it = shots.begin();
    while (it != shots.end()) {
      if (it->pos.y() >= Kill_Line) {
        it = shots.erase(it);
      }
      else it++;
    }

    env.begin();

    // ラムダ式なら早期リターンできるかも
    for (auto& it : shots) {
      if (it.status == ShotStatus::Active){
        drawPoint(it.pos.x(), it.pos.y(), Radius, Color::white);
      }
    }

    env.end();
  }
}

//
// 書き終わって思った
// list必要なくね
// Shot数決まってたらコンテナ不要だわ