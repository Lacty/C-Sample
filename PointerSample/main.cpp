
#include <iostream>


int main()
{
  int   iValue = 5;           // int�^
  int*  piValue = &iValue;    // piValue��iValue�̃A�h���X����

  // 5
  std::cout << "iValue = " << iValue << std::endl;

  // iValue�̃A�h���X
  std::cout << "&iValue = " << &iValue << std::endl;

  // piValue��iValue�̃A�h���X�����Ă���̂�
  // iValue�̃A�h���X
  std::cout << "piValue = " << piValue << std::endl;

  // piValue�̃A�h���X
  std::cout << "&piValue = " << &piValue << std::endl;

  // �|�C���^���g��iValue�̒��g���Q��
  // 5
  std::cout << "*piValue = " << *piValue << std::endl;

  

  struct Player{
    int x;
    int y;
    Player(int x, int y){
      this->x = x;
      this->y = y;
    }
  };

  Player player(1, 2);           // x=1, y=2�ŏ�����
  Player* pplayer = &player;     // pplayer��player�̃A�h���X����

  // �����Ɠ����A�h���X��f���o�����m�F
  // ���ʁF�����A�h���X��f���o����
  std::cout << "&player = " << &player << std::endl;
  std::cout << "pplayer = " << pplayer << std::endl;

  // player.x�̃A�h���X
  // ���ʁFplayer�̃A�h���X��f���o����
  std::cout << "&player.x = " << &player.x << std::endl;

  // player.y�̃A�h���X
  // ���ʁFplayer�̃A�h���X��f���o����
  std::cout << "&player.y = " << &player.y << std::endl;

  /*
   * pplayer.x�͂ł��Ȃ�
   * �����܂�player�̃A�h���X������
  */

  return 0;
}