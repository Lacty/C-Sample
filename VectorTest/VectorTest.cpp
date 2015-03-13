
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


  //--------イテレータ--------//
  // イテレータの宣言
  std::vector<int>::iterator it;
  for (it = va.begin(); it != va.end(); ++it){
    std::cout << *it << std::endl;
  }

  // it = va.begin()
  /* vaの先頭を指すイテレータをitに代入
   * この時点でitはvaの先頭要素を指している
  */

  // it != va.end()
  /* 終了条件
   * va.end()はvaの最終要素のイテレータを返す
   * "<"ではなく"!="なのはイテレータが必ずしも比較できないから
   * vectorはできるらしい
  */

  // ++it
  /* イテレータを進める
  */

  // *it
  /* 要素にアクセス
   * itではイテレータそのものを指すことになるcoutではエラー
   * ポインタ
  */

	return 0;
}

