
#include <iostream>


int main(){
  // �����_���̍\��
  // [�L���v�`��](������)->�߂�l{��������};

  // ():������
  // �ȗ���

  // ->:�߂�l
  // �ȗ���

  {
    // ���̂܂܏������ꍇ
    auto a = []()->int{ return 10; };
    std::cout << a() << std::endl;

    // �o�͌���
    // 10
  }

  {
    // �ȗ����ď������ꍇ
    auto a = []{ return 10; };
    std::cout << a() << std::endl;

    // �o�͌���
    // 10
  }

  return 0;
}