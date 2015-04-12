
#include "lib/framework.hpp"

enum WindowSize {
  WIDTH  = 500,
  HEIGHT = 500,
};


void drawMap(const int& map_num,
             const int& map_y,
             const int& map_x,
             const int& chip_size)
{
  Color color;

  switch (map_num){
  case 0: { color = Color::white; }break;
  case 1: { color = Color::gray;  }break;
  case 2: { color = Color::green; }break;
  case 3: { color = Color::cyan;  }break;
  case 4: { color = Color::lime;  }break;
  }

  drawBox(map_x * chip_size - (WIDTH * 0.5f),
         -map_y * chip_size + (HEIGHT * 0.5f) - chip_size,
          chip_size, chip_size,
          2,
          color);
}

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

    for (int map_y = 0; map_y < Map_Y; ++map_y){
      for (int map_x = 0; map_x < Map_X; ++map_x) {
        drawMap(map[map_y][map_x], map_y, map_x, 100);
      }
    }

    env.end();
  }
}
