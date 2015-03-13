
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  std::vector<int> va = { 1, 2 ,3 };

  //========size()========//
  /* �z��̗v�f����f���o��
  */
  std::cout << va.size() << std::endl;

  //========max_size()========//
  /* ���̔z�񂪎��Ă�ő�v�f��
  */
  std::cout << va.max_size() << std::endl;

  //========empty()========//
  /* �z�񂪋�Ȃ�true��Ԃ�
  */
  if (va.empty()){
    std::cout << "�z��͋�ł��B" << std::endl;
  }
  else{
    std::cout << "�z��ɗv�f������܂��B" << std::endl;
  }

  //========capacity()========//
  /* �L���̈���m�ۂ��Ȃ���(push_back�Ȃ�)�K�v�Ȃ���
   * �m�ۂł���v�f����f���o��
  */
  std::cout << va.capacity() << std::endl;

  //========resize()========//
  /* �z�񂪎��Ă�ő�v�f����ύX����
  */
  va.resize(10);
  // capacity()�Ŋm�F
  std::cout << va.capacity() << std::endl;


  //========shrink_to_fit()========//
  /* C++11����ǉ����ꂽ����
   * �ő�v�f�����w�肵�Đ錾�����ꍇ�Ȃ�
   * ����Ȃ��L���̈��������邱�Ƃ��ł���
  */
  std::vector<int> vb(100);
  std::cout << vb.capacity() << " " << vb.size() << std::endl;
  vb.resize(5);
  std::cout << vb.capacity() << " " << vb.size() << std::endl;
  vb.shrink_to_fit();
  std::cout << vb.capacity() << " " << vb.size() << std::endl;


  // �o�͌���
  // "Possible output1.png"

	return 0;
}

