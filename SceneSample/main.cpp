
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/utils.hpp"
#include <string>

enum Window {
  WIDTH  = 512,
  HEIGHT = 256
};

struct Scene{
  std::string bg_image;
};

bool executeScene(AppEnv& env, Scene& scene){
  Texture bg_image(scene.bg_image);

  while (1){
    // アプリが閉じられたらプログラム終了
    if (!env.isOpen()) { return false; }

    if (env.isPushButton(Mouse::LEFT)) { break; }

    // 描画準備
    env.setupDraw();

    drawTextureBox(-128, -128, 256, 256,
                   0, 0, 256, 256,
                   bg_image,
                   Color(1, 1, 1));

    // 画面更新
    env.update();
  }

  env.flushInput();

  return true;
}

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  // シーン情報
  Scene scene[] = {
    "res/bg1.png",
    "res/bg2.png",
    "res/bg3.png"
  };

  // シーンを順番に描画
  for (unsigned int i = 0; i < elemsof(scene); ++i){
    bool result = executeScene(env, scene[i]);
    if (!result) { break; }
  }
}
