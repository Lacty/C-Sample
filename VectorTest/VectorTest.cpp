
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


  //--------�C�e���[�^--------//
  // �C�e���[�^�̐錾
  std::vector<int>::iterator it;
  for (it = va.begin(); it != va.end(); ++it){
    std::cout << *it << std::endl;
  }

  // it = va.begin()
  /* va�̐擪���w���C�e���[�^��it�ɑ��
   * ���̎��_��it��va�̐擪�v�f���w���Ă���
  */

  // it != va.end()
  /* �I������
   * va.end()��va�̍ŏI�v�f�̃C�e���[�^��Ԃ�
   * "<"�ł͂Ȃ�"!="�Ȃ̂̓C�e���[�^���K��������r�ł��Ȃ�����
   * vector�͂ł���炵��
  */

  // ++it
  /* �C�e���[�^��i�߂�
  */

  // *it
  /* �v�f�ɃA�N�Z�X
   * it�ł̓C�e���[�^���̂��̂��w�����ƂɂȂ�cout�ł̓G���[
   * �|�C���^
  */

	return 0;
}

