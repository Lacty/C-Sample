
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  std::vector<int> ary;


  for (int i = 0; i < 2; ++i){
    // .push_back("中に入れるもの");
    ary.push_back(2);
  }

  // 配列の要素数
  std::cout << ary.size() << std::endl;

  // 配列０番目の中身
  std::cout << ary[0] << std::endl;

  // warning C4018: '<' : signed/unsigned mismatch
  // .size()はunsignedで返るのに比較対象"int i"がsignedですよって警告
  for (int i = 0; i < ary.size(); ++i){
    std::cout << ary[i] << std::endl;
  }

	return 0;
}

