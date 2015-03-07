
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp"
#include <vector>
#include <ctime>
#include <algorithm>

enum Window {
  WIDTH = 512,
  HEIGHT = 512
};

bool CollisionRectToRect(float obj1_point_x, float obj1_point_y, float obj1_size_width, float obj1_size_height,
                         float obj2_point_x, float obj2_point_y, float obj2_size_width, float obj2_size_height)
{
  if (obj1_point_x + obj1_size_width > obj2_point_x){
    if (obj1_point_x < obj2_point_x + obj2_size_width){
      if (obj1_point_y + obj1_size_height > obj2_point_y){
        if (obj1_point_y < obj2_point_y + obj2_size_height){
          return true;
        }
      }
    }
  }
  return false;
}

enum ObjectVal{
  SHOT_MAX = 3,
  BOX_MAX  = 20
};

enum BoxSize{
  SIZE_WH = 40
};

struct Object{
  bool active;
  float x;
  float y;
  float width;
  float height;
  float angle;
  float speed_x;
  float speed_y;
  Color color;
};

void PlayerMove(AppEnv& env, Object& player){
  if (env.isPressKey(GLFW_KEY_LEFT)){
    player.x -= player.speed_x;
  }
  if (env.isPressKey(GLFW_KEY_RIGHT)){
    player.x += player.speed_x;
  }
}

void PlayerDraw(Object& player){
  drawFillBox(player.x, player.y, player.width, player.height, Color(1, 1, 1));
}

void ShotUpdate(AppEnv& env, Object* shot, Object& player){
  // スペースを押したとき
  // activeでない弾を生成して
  // 位置を初期化する
  if (env.isPullKey(GLFW_KEY_SPACE)){
    for (int i = 0; i < SHOT_MAX; ++i){
      if (!shot[i].active){
        shot[i].active = true;

        shot[i].x = player.x + player.width / 2;
        shot[i].y = player.y + player.height / 2;

        break;
      }
    }
  }

  // 弾がactiveなら移動させる
  for (int i = 0; i < SHOT_MAX; ++i){
    if (shot[i].active){
      shot[i].y += shot[i].speed_y;
    }
  }

  // 弾が画面外にでたらactiveをfalseにする
  for (int i = 0; i < SHOT_MAX; ++i){
    if (shot[i].y > HEIGHT / 2){
      shot[i].active = false;
    }
  }
}

void ShotDraw(Object* shot){
  for (int i = 0; i < SHOT_MAX; ++i){
    if (shot[i].active){
      drawFillBox(shot[i].x, shot[i].y, shot[i].width, shot[i].height, Color(1, 1, 1));
    }
  }
}

void BoxUpdate(Object* box, Object* shot){
  Random r;
  r.setSeed(u_int(time(nullptr)));
  static int sign = -1;
  const int TriggerCount = 30;
  static int time = 0;
  time++;

  // 生成処理
  if (time > TriggerCount){
    time = 0;
    for (int i = 0; i < BOX_MAX; ++i){
      if (!box[i].active){
        box[i].x = r.fromFirstToLast(-WIDTH/2, WIDTH/2 - BoxSize::SIZE_WH);
        box[i].y = HEIGHT / 2 - BoxSize::SIZE_WH;
        box[i].width = BoxSize::SIZE_WH;
        box[i].height = BoxSize::SIZE_WH;
        box[i].angle = 0;
        box[i].speed_x = r.fromFirstToLast(-6.0f, 6.0f);
        box[i].speed_y = r.fromFirstToLast(-6.0f, 6.0f);
        box[i].color = Color(0.7f, 1.0f, 1.0f);
        box[i].active = true;
        break;
      }
    }
  }

  // 移動処理
  for (int i = 0; i < BOX_MAX; ++i){
    if (box[i].active){
      box[i].x += box[i].speed_x;
      box[i].y += box[i].speed_y;
    }
  }

  // 画面で跳ね返る処理
  for (int i = 0; i < BOX_MAX; ++i){
    if ((box[i].x < -WIDTH / 2) ||
      (box[i].x + box[i].width > WIDTH / 2))
    {
      box[i].speed_x *= sign;
      box[i].x = std::max(box[i].x, (float)-WIDTH/2);
      box[i].x = std::min(box[i].x, (float)WIDTH/2 - box[i].width);
    }

    if ((box[i].y < -HEIGHT / 2) ||
      (box[i].y + box[i].height > HEIGHT / 2))
    {
      box[i].speed_y *= sign;
      box[i].y = std::max(box[i].y, (float)-HEIGHT/2);
      box[i].y = std::min(box[i].y, (float)HEIGHT/2 - box[i].height);
    }
  }

  // 回転処理
  for (int i = 0; i < BOX_MAX; ++i){
    box[i].angle += 0.05;
  }

  // きらきらさせる処理
  for (int i = 0; i < BOX_MAX; ++i){
    box[i].color = Color(r.fromFirstToLast(0.0f, 1.0f),    // red
                         r.fromFirstToLast(0.0f, 1.0f),    // green
                         r.fromFirstToLast(0.0f, 1.0f));   // blue
  }
}

void BoxDraw(Object* box){
  for (int i = 0; i < BOX_MAX; ++i){
    if (box[i].active){
      drawFillBox(box[i].x, box[i].y, box[i].width, box[i].height,
                  box[i].color,
                  box[i].angle,
                  Vec2f(1, 1),
                  Vec2f(20, 20));
    }
  }
}

void CollisionBoxToShot(Object* box, Object* shot){
  for (int b = 0; b < BOX_MAX; ++b){
    for (int s = 0; s < SHOT_MAX; ++s){
      if (box[b].active && shot[s].active){
        if (CollisionRectToRect(box[b].x, box[b].y, box[b].width, box[b].height,
          shot[s].x, shot[s].y, shot[s].width, shot[s].height))
        {
          shot[s].active = false;
          box[b].active  = false;
        }
      }
    }
  }
}

void Init(Object& player, Object* shot, Object* box){
  player.active = true;
  player.x = 0;
  player.y = -HEIGHT / 5 * 2;
  player.width = 30;
  player.height = 30;
  player.angle = 0;
  player.speed_x = 5;

  for (int i = 0; i < SHOT_MAX; ++i){
    shot[i].active = false;
    shot[i].speed_y = 20;
    shot[i].width = 5;
    shot[i].height = 15;
  }

  for (int i = 0; i < BOX_MAX; ++i){
    box[i].active = false;
  }
}

int main()
{
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  Object shot[SHOT_MAX];
  Object box[BOX_MAX];
  Object player;

  Init(player, shot, box);

  while (env.isOpen()){
    PlayerMove(env, player);
    ShotUpdate(env, shot, player);
    BoxUpdate(box, shot);
    CollisionBoxToShot(box, shot);

    env.setupDraw();

    PlayerDraw(player);
    ShotDraw(shot);
    BoxDraw(box);

    env.update();
  }
}
