
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  std::vector<int> ary;


  for (int i = 0; i < 2; ++i){
    // .push_back("���ɓ�������");
    ary.push_back(2);
  }

  // �z��̗v�f��
  std::cout << ary.size() << std::endl;

  // �z��O�Ԗڂ̒��g
  std::cout << ary[0] << std::endl;

  // warning C4018: '<' : signed/unsigned mismatch
  // .size()��unsigned�ŕԂ�̂ɔ�r�Ώ�"int i"��signed�ł�����Čx��
  for (int i = 0; i < ary.size(); ++i){
    std::cout << ary[i] << std::endl;
  }

	return 0;
}

