
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include <fstream>

enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};


struct Object{
  float x;
  float y;
  float size_wh;
  float speed;
  Color color;
  Texture image;
};

void PlayerMove(AppEnv& env, Object& player){
  if (env.isPressKey(GLFW_KEY_RIGHT)){
    player.x += player.speed;
  }
  if (env.isPressKey(GLFW_KEY_LEFT)){
    player.x -= player.speed;
  }
  if (env.isPressKey(GLFW_KEY_UP)){
    player.y += player.speed;
  }
  if (env.isPressKey(GLFW_KEY_DOWN)){
    player.y -= player.speed;
  }
}

void PlayerDraw(AppEnv& env, Object& player){
  drawTextureBox(player.x, player.y, player.size_wh, player.size_wh,
                 0, 0, player.size_wh, player.size_wh,
                 player.image,
                 player.color);
}

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  Object player;
  std::ifstream fstr("res/data.txt");
  if (fstr){
    fstr >> player.x >> player.y;
    fstr >> player.speed;
    fstr >> player.size_wh;

    int red, green, blue;
    fstr >> red >> green >> blue;
    player.color = Color(red, green, blue);

    // fstr >> player.image;
    std::string path;
    fstr >> path;
    player.image = Texture(path);
  }

  while (env.isOpen()) {
    PlayerMove(env, player);
    env.setupDraw();
    PlayerDraw(env, player);

    env.update();
  }
}
