
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  // int型のvector　vaを宣言
  std::vector<int> va;
  
  // push_back
  /* 値をベクタの末尾に追加
  */
  va.push_back(0); // 0番目に "0" を追加
  va.push_back(1); // 1番目に "1" を追加
  va.push_back(2); // 2番目に "2" を追加


  //---------アクセス方法---------//

  // operator[i]
  // i番目の要素にアクセスできる
  std::cout << va[0] << std::endl;

  // at(i)
  // i番目の要素にアクセスできる
  // oparator[]と違うのはこの配列内のみアクセスするというところ
  // 安全にアクセスできる
  std::cout << va.at(0) << std::endl;
  
  // front
  // 配列の最初の要素にアクセスできる
  std::cout << va.front() << std::endl;

  // back
  // 配列の最終要素にアクセスできる
  std::cout << va.back() << std::endl;

	return 0;
}

