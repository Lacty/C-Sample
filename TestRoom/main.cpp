
#include <iostream>


class Fuga{
public:
  int x;
  int y;

  // 初期化リストを使えば”宣言時”に値を入れることができる
  // コンストラクタ本体の処理({}の中)だと、宣言後に”代入”することとなる
  Fuga() : x(1), y(2)
  {}
};

// Fugaクラスを丸ごとコピーして生成することになるので処理が重い
int Func1(Fuga fuga){
  return fuga.x + fuga.y;
}

// constは値を変更しないと明示し保障
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
