
#include <iostream>
#include <vector>


int main()
{
  // vector�̏�����
  std::vector<int> v = { 1, 2, 3, 4, 5 };

  // C++11�����for range
  for (auto i : v){
    std::cout << i << std::endl;
  }

  /*
   * ����Ă邱��
   * i = v[0]
   * i = v[1]
   * i = v[2]
   * ...
  */

  return 0;
}