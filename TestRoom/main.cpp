
#include <iostream>


class Fuga{
public:
  int x;
  int y;

  // ���������X�g���g���΁h�錾���h�ɒl�����邱�Ƃ��ł���
  // �R���X�g���N�^�{�̂̏���({}�̒�)���ƁA�錾��Ɂh����h���邱�ƂƂȂ�
  Fuga() : x(1), y(2)
  {}
};

// Fuga�N���X���ۂ��ƃR�s�[���Đ������邱�ƂɂȂ�̂ŏ������d��
int Func1(Fuga fuga){
  return fuga.x + fuga.y;
}

// const�͒l��ύX���Ȃ��Ɩ������ۏ�
int Func2(const Fuga& fuga){
  return fuga.x + fuga.y;
}

int main()
{
  Fuga fuga;

  std::cout << "Func1 = " << Func1(fuga) << std::endl; // 3
  std::cout << "Func2 = " << Func2(fuga) << std::endl; // 3

  return 0;
}
