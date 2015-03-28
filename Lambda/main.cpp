
#include <iostream>


int main(){
  // ラムダ式の構造
  // [キャプチャ](仮引数)->戻り値{複合分文};

  // ():仮引数
  // 省略可

  // ->:戻り値
  // 省略可

  {
    // そのまま書いた場合
    auto a = []()->int{ return 10; };
    std::cout << a() << std::endl;

    // 出力結果
    // 10
  }

  {
    // 省略して書いた場合
    auto a = []{ return 10; };
    std::cout << a() << std::endl;

    // 出力結果
    // 10
  }

  return 0;
}