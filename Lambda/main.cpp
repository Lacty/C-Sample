
#include <iostream>


// 引数に与えた数値が2倍になって帰ってくる関数
int hoge(int& val){
  return val * 2;
}

int main(){
  // ラムダ式の構造
  // [キャプチャ](仮引数)->戻り値{複合分文};

  // ラムダ式hoge関数
  auto piyo = [&](int val)->int{
    return val * 2;
  };

  {
    // hoge
    int val = 2;
    std::cout << hoge(val) << std::endl;
    
    // 出力結果
    // 4
  }

  {
    // piyo
    int val = 3;
    std::cout << piyo(val) << std::endl;

    // 出力結果
    // 6
  }

  return 0;
}