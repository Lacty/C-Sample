
#include <iostream>


// �����ɗ^�������l��2�{�ɂȂ��ċA���Ă���֐�
int hoge(int& val){
  return val * 2;
}

int main(){
  // �����_���̍\��
  // [�L���v�`��](������)->�߂�l{��������};

  // �����_��hoge�֐�
  auto piyo = [&](int val)->int{
    return val * 2;
  };

  {
    // hoge
    int val = 2;
    std::cout << hoge(val) << std::endl;
    
    // �o�͌���
    // 4
  }

  {
    // piyo
    int val = 3;
    std::cout << piyo(val) << std::endl;

    // �o�͌���
    // 6
  }

  return 0;
}