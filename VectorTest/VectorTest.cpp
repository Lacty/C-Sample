
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  // int�^��vector�@va��錾
  std::vector<int> va;
  
  // push_back
  /* �l���x�N�^�̖����ɒǉ�
  */
  va.push_back(0); // 0�Ԗڂ� "0" ��ǉ�
  va.push_back(1); // 1�Ԗڂ� "1" ��ǉ�
  va.push_back(2); // 2�Ԗڂ� "2" ��ǉ�


  //---------�A�N�Z�X���@---------//

  // operator[i]
  // i�Ԗڂ̗v�f�ɃA�N�Z�X�ł���
  std::cout << va[0] << std::endl;

  // at(i)
  // i�Ԗڂ̗v�f�ɃA�N�Z�X�ł���
  // oparator[]�ƈႤ�̂͂��̔z����̂݃A�N�Z�X����Ƃ����Ƃ���
  // ���S�ɃA�N�Z�X�ł���
  std::cout << va.at(0) << std::endl;
  
  // front
  // �z��̍ŏ��̗v�f�ɃA�N�Z�X�ł���
  std::cout << va.front() << std::endl;

  // back
  // �z��̍ŏI�v�f�ɃA�N�Z�X�ł���
  std::cout << va.back() << std::endl;

	return 0;
}

