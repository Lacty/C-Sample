
#include <iostream>


class Test01 {
private:
  float x[10];

public:
  Test01() {
    for (int i = 0; i < 10; ++i) 
    {
      x[i] = i;
    }
  }

  float* getX() {
    return x;
  }
};

class Test02 {
public:
  void Show(float* x) {
    std::cout << x[0] << std::endl;
  }
};

int main()
{
  Test01 test01;
  Test02 test02;

  test02.Show(test01.getX());

  return 0;
}