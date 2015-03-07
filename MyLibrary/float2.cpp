
#include <iostream>

struct float2{
  float x;
  float y;
  float2(){
    x = 0;
    y = 0;
  }
  float2(float x, float y){
    this->x = x;
    this->y = y;
  }
};


int main()
{
  float2 pos(3.0f, 4.0f);
  float2 size;

  std::cout << "pos.x = " << pos.x << std::endl;   // 3
  std::cout << "pos.y = " << pos.y << std::endl;   // 4
  std::cout << "size.x = " << size.x << std::endl; // 0
  std::cout << "size.y = " << size.y << std::endl; // 0

  return 0;
}
