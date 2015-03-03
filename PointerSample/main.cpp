
#include <iostream>


int main()
{
  int   iValue = 5;           // int型
  int*  piValue = &iValue;    // piValueにiValueのアドレスを代入

  // 5
  std::cout << "iValue = " << iValue << std::endl;

  // iValueのアドレス
  std::cout << "&iValue = " << &iValue << std::endl;

  // piValueはiValueのアドレスを見ているので
  // iValueのアドレス
  std::cout << "piValue = " << piValue << std::endl;

  // piValueのアドレス
  std::cout << "&piValue = " << &piValue << std::endl;

  // ポインタを使いiValueの中身を参照
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

  Player player(1, 2);           // x=1, y=2で初期化
  Player* pplayer = &player;     // pplayerにplayerのアドレスを代入

  // ちゃんと同じアドレスを吐き出すか確認
  // 結果：同じアドレスを吐き出した
  std::cout << "&player = " << &player << std::endl;
  std::cout << "pplayer = " << pplayer << std::endl;

  // player.xのアドレス
  // 結果：playerのアドレスを吐き出した
  std::cout << "&player.x = " << &player.x << std::endl;

  // player.yのアドレス
  // 結果：playerのアドレスを吐き出した
  std::cout << "&player.y = " << &player.y << std::endl;

  /*
   * pplayer.xはできない
   * あくまでplayerのアドレスを持つ
  */

  return 0;
}