
#include <iostream>


int main(){
  // ラムダ式の構造
  // [キャプチャ](仮引数)->戻り値{複合分文};

  // [=]:コピーキャプチャ
  
  {
    int cpy = 5;
    auto hoge = [=](int val)->int{
      return cpy + val;
    };
    std::cout << hoge(10) << std::endl;
  }

  /*{
    int cpy = 5;
    auto hoge = [](int val)->int{

      return cpy + val;

      // cpyとはなんぞや？
      // と怒られる
    };
    std::cout << hoge(10) << std::endl;
  }*/

  {
    // 個別に指定することも可能
    int cpy1 = 5;
    int cpy2 = 20;
    auto hoge = [cpy1, cpy2](int val)->int{
      return cpy1 + cpy2 + val;
    };
    std::cout << hoge(10) << std::endl;
  }

  /*{
    int cpy1 = 5;
    int cpy2 = 20;
    auto hoge = [cpy1](int val)->int{

      return cpy1 + cpy2 + val;
      
      // cpy2とはなんぞや？
      // と怒られる
    };
    std::cout << hoge(10) << std::endl;
  }*/

  return 0;
}