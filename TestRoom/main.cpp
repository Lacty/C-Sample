
#include <iostream>
#include <vector>


int main()
{

  int c;
  std::cout << "���͂��Ă�" << std::endl;
  std::cin >> c;

  std::vector<int> ary;
  for (int i = 0; i < c; ++i){
    ary.push_back(i);
  }

  for (auto x : ary){
    std::cout << "ary[" << x << "] = " << ary[x] << std::endl;
  }

  return 0;
}