
#include <iostream>

// ������������܂��߂��e���v���[�g�֐�
template<typename T> // T:�Ȃ�ł�OK�Ȍ^
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
