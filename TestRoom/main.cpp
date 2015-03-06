
#include <iostream>

// 貰った引数をまた戻すテンプレート関数
template<typename T> // T:なんでもOKな型
T Func(const T& x){
  return x;
}

int main()
{
  int num = 3;

  auto i = Func<int>(num);

  std::cout << "i = " << i << std::endl;

  return 0;
}
