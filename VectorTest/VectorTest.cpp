
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  std::vector<int> va = { 1, 2 ,3 };

  //========size()========//
  /* 配列の要素数を吐き出す
  */
  std::cout << va.size() << std::endl;

  //========max_size()========//
  /* この配列が持てる最大要素数
  */
  std::cout << va.max_size() << std::endl;

  //========empty()========//
  /* 配列が空ならtrueを返す
  */
  if (va.empty()){
    std::cout << "配列は空です。" << std::endl;
  }
  else{
    std::cout << "配列に要素があります。" << std::endl;
  }

  //========capacity()========//
  /* 記憶領域を確保しなおす(push_backなど)必要なしに
   * 確保できる要素数を吐き出す
  */
  std::cout << va.capacity() << std::endl;

  //========resize()========//
  /* 配列が持てる最大要素数を変更する
  */
  va.resize(10);
  // capacity()で確認
  std::cout << va.capacity() << std::endl;


  //========shrink_to_fit()========//
  /* C++11から追加されたもの
   * 最大要素数を指定して宣言した場合など
   * いらない記憶領域を解放することができる
  */
  std::vector<int> vb(100);
  std::cout << vb.capacity() << " " << vb.size() << std::endl;
  vb.resize(5);
  std::cout << vb.capacity() << " " << vb.size() << std::endl;
  vb.shrink_to_fit();
  std::cout << vb.capacity() << " " << vb.size() << std::endl;


  // 出力結果
  // "Possible output1.png"

	return 0;
}

