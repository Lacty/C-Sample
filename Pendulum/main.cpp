//
// 振り子
//

#include "lib/appEnv.hpp"
#include "lib/graph.hpp"


// アプリのウインドウサイズ
enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};


// 
// メインプログラム
// 
int main() {
  // アプリウインドウの準備
  AppEnv app_env(Window::WIDTH, Window::HEIGHT,
                 false, false);

  app_env.bgColor(Color(0.5, 0.5, 0.5));

  Texture image("res/miku.png");
  float angle = 0.0;
  
  
  while (1) {
    // アプリウインドウが閉じられたらプログラムを終了
    if (!app_env.isOpen()) return 0;
    
    // 描画準備
    app_env.setupDraw();

    // 60度~-60度をいったりきたり
    float r = (M_PI / 6) * std::sin(angle);
    angle += 0.05;

    // 画像の中心位置を振り子の中心位置にして表示
    drawTextureBox(0.0, 200.0, 256.0, 257.0,
                   0.0, 0.0, 256.0, 257.0,
                   image,
                   Color(1, 1, 1),
                   r,
                   Vec2f(1, 1),
                   Vec2f(145, 400));
    
    
    // 画面更新
    app_env.update();
  }
  
  // アプリ終了
}
