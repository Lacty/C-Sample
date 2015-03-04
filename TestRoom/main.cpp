
#include <iostream>
#include <vector>


int main()
{
  // vectorの初期化
  std::vector<int> v = { 1, 2, 3, 4, 5 };

  // C++11からのfor range
  for (auto i : v){
    std::cout << i << std::endl;
  }

  /*
   * やってること
   * i = v[0]
   * i = v[1]
   * i = v[2]
   * ...
  */

  return 0;
}