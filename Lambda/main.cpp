
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
  // ラムダ式の構造
  // [キャプチャ](仮引数)->戻り値{複合分文};

  // [&]:参照キャプチャ

  {
    cHoge* hoge = new cHoge;
    auto piyo = [&]{
      return hoge->getInstance();
    };

    std::cout << piyo() << std::endl;

    // 出力結果
    // 10

    // 何したいんだ俺は。ω。
    // いや無駄ではないか・・・？
    // piyo呼び出せばhoge->getInstanceがよべるし・・・？
  }

  return 0;
}