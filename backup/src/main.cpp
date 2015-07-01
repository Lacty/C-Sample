
#include "lib/framework.hpp"
#include "collision.h"
#include "object.h"

#define SHOT_MAX 20

/*
  実際にはコードを配るのではなく
  一から作成するのを見せて
  同じコードを書いてもらう予定です

  ・コードを書いてもらいたい
  ・分からないところをリアルタイムで聞いてほしい

  弾はグローバルにするか迷ったけど
  ポインタの扱いに慣れてほしかったのでポインタ渡ししてます
*/


// プレイヤーの初期化
void initPlayer(Texture& image, Object& player) {
  player.dir = Direction::Right;
  player.pos = Vec2f::Zero();
  player.size = Vec2f(image.width(), image.height());
  player.color = Color::black;
}

// 弾の初期化
// すべての弾を未使用の状態にする
void initShots(Shot* shot) {
  for (int i = 0; i < SHOT_MAX; ++i) {
    shot->active = false;
    shot->pos = Vec2f::Zero();
    shot->size = Vec2f(10, 10);
    shot->color = Color(1, 0.6f, 0);
    ++shot;
  }
}

// プレイヤーの描画処理
void drawPlayer(Texture& image, Object& player) {
  float offset = - player.dir * (player.size.x() * 0.5f);

  drawTextureBox(player.pos.x() + offset, player.pos.y(),
                 player.size.x(), player.size.y(),
                 0, 0, player.size.x(), player.size.y(),
                 image,
                 player.color,
                 0.f,
                 Vec2f(player.dir, 1),
                 Vec2f(0, 0));
}

// プレイヤーの移動処理
void movePlayer(AppEnv& env, Object& player) {
  const float Speed = 5.f;
  if (env.isPressKey(GLFW_KEY_A)) {
    player.dir = Direction::Left;
    player.pos.x() -= Speed;
  }
  if (env.isPressKey(GLFW_KEY_D)) {
    player.dir = Direction::Right;
    player.pos.x() += Speed;
  }
  if (env.isPressKey(GLFW_KEY_W)) {
    player.pos.y() += Speed;
  }
  if (env.isPressKey(GLFW_KEY_S)) {
    player.pos.y() -= Speed;
  }
}

// 弾の生成処理
void createShot(AppEnv& env, Shot* shot, Object& player) {
  if (env.isPushKey(GLFW_KEY_SPACE)) {
    for (int i = 0; i < SHOT_MAX; ++i) {
      if (!shot->active) {
        shot->active = true;
        shot->dir = player.dir;

        // ちょうど顔の位置から発射されるように位置調整
        Vec2f offset = Vec2f(50 * shot->dir, 100);
        shot->pos = player.pos + offset;
        break;
      }
      ++shot;
    }
  }
}

// 弾の移動処理
void moveShots(Shot* shot) {
  const float Speed = 10.f;
  for (int i = 0; i < SHOT_MAX; ++i) {
    if (shot->active) {
      shot->pos.x() += Speed * shot->dir;
    }
    ++shot;
  }
}

void drawShots(Shot* shot) {
  // 弾の描画処理
  for (int i = 0; i < SHOT_MAX; ++i) {
    if (shot->active) {
      drawFillBox(shot->pos.x(), shot->pos.y(),
                  shot->size.x(), shot->size.y(),
                  shot->color);
    }
    ++shot;
  }
}

// Shotを管理する関数
void shotManager(AppEnv& env, Shot* shot, Object& player) {
  createShot(env, shot, player);
  moveShots(shot);
  drawShots(shot);
}


int main() {
  AppEnv env(640, 480);
  env.bgColor(Color::white);

  Texture image("res/player.png");
  Object player;
  Shot shots[SHOT_MAX];

  initPlayer(image, player);
  initShots(shots);

  while (env.isOpen()) {
    env.begin();

    movePlayer(env, player);
    shotManager(env, shots, player);

    drawPlayer(image, player);

    env.end();
  }
}
