
#include <iostream>
#include <algorithm>


int main()
{
  // 1, 0 �ǂ��炪�傫�������f���āA�傫�������o��
  std::cout << "max = " << std::max(1, 0) << std::endl;

  // 1, 0 �ǂ��炪�����������f���āA�����������o��
  std::cout << "min = " << std::min(1, 0) << std::endl;

  
  //----------�Q�[���ł̎g�p��------------//
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
