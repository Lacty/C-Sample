
#include <iostream>
#include <algorithm>


int main()
{
  // 1, 0 どちらが大きいか判断して、大きい方を出力
  std::cout << "max = " << std::max(1, 0) << std::endl;

  // 1, 0 どちらが小さいか判断して、小さい方を出力
  std::cout << "min = " << std::min(1, 0) << std::endl;

  
  //----------ゲームでの使用例------------//
  enum Window{
    WIDTH  = 200
  };

  struct Player{
    float x;
    float speed;
    Player() : x(205.0f), speed(5.0f){}
  }player;

  int sign = -1;

  if ((player.x >=  WIDTH * 0.5f) ||
      (player.x <= -WIDTH * 0.5f)){
    player.speed *= sign;
    player.x = std::max(player.x, -WIDTH * 0.5f);
    player.x = std::min(player.x,  WIDTH * 0.5f);
  }

  return 0;
}
