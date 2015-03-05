
#include <iostream>
#include <vector>


int main()
{
  /* 繰り返し処理(iteration) */
  int ary[5] = { 1, 2, 3, 4, 5 };
  for (int i = 0; i < 5; ++i){
    std::cout << ary[i] << std::endl;
  }

  /* ポインタを使った繰り返し処理 */
  for (int* it = ary; it < &ary[5]; ++it){
    std::cout << *it << std::endl;
  }

  /* イテレータを使った繰り返し処理 */
  std::vector<int> v = { 1, 2, 3, 4, 5 };
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it){
    std::cout << *it << std::endl;
  }
  /*
   * it < v.end()　では無いのは
   * イテレーターが<演算子で比較できるとは限らないから
  */


  /* 長ったらしいのでC++11のfor rangeを使う */
  // ポインタ(*it)でなくてOK
  for (auto it : v){
    std::cout << it << std::endl;
  }

  return 0;
}
