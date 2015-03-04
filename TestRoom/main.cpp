
#include <iostream>
#include <vector>


int main()
{
  // vector‚Ì‰Šú‰»
  std::vector<int> v = { 1, 2, 3, 4, 5 };

  // C++11‚©‚ç‚Ìfor range
  for (auto i : v){
    std::cout << i << std::endl;
  }

  /*
   * ‚â‚Á‚Ä‚é‚±‚Æ
   * i = v[0]
   * i = v[1]
   * i = v[2]
   * ...
  */

  return 0;
}