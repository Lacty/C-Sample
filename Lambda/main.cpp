
#include <iostream>


int main(){
  // �����_���̍\��
  // [�L���v�`��](������)->�߂�l{��������};

  // [=]:�R�s�[�L���v�`��
  
  {
    int cpy = 5;
    auto hoge = [=](int val)->int{
      return cpy + val;
    };
    std::cout << hoge(10) << std::endl;
  }

  /*{
    int cpy = 5;
    auto hoge = [](int val)->int{

      return cpy + val;

      // cpy�Ƃ͂Ȃ񂼂�H
      // �Ɠ{����
    };
    std::cout << hoge(10) << std::endl;
  }*/

  {
    // �ʂɎw�肷�邱�Ƃ��\
    int cpy1 = 5;
    int cpy2 = 20;
    auto hoge = [cpy1, cpy2](int val)->int{
      return cpy1 + cpy2 + val;
    };
    std::cout << hoge(10) << std::endl;
  }

  /*{
    int cpy1 = 5;
    int cpy2 = 20;
    auto hoge = [cpy1](int val)->int{

      return cpy1 + cpy2 + val;
      
      // cpy2�Ƃ͂Ȃ񂼂�H
      // �Ɠ{����
    };
    std::cout << hoge(10) << std::endl;
  }*/

  return 0;
}