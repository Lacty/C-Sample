
#include <iostream>


class cHoge{
public:

  cHoge() :
  m_x(10) {}

  int getInstance(){
    return m_x;
  }


private:

  int m_x;
};

int main(){
  // �����_���̍\��
  // [�L���v�`��](������)->�߂�l{��������};

  // [&]:�Q�ƃL���v�`��

  {
    cHoge* hoge = new cHoge;
    auto piyo = [&]{
      return hoge->getInstance();
    };

    std::cout << piyo() << std::endl;

    // �o�͌���
    // 10

    // ���������񂾉��́B�ցB
    // ���△�ʂł͂Ȃ����E�E�E�H
    // piyo�Ăяo����hoge->getInstance����ׂ邵�E�E�E�H
  }

  return 0;
}