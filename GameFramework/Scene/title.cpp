
#include "title.h"


cTitle::cTitle() :
m_select_num(0)
{
  std::cout << "title�V�[��" << std::endl;
}


void cTitle::update(){
  std::cout << "�i�ރX�e�[�W��I��ł�������" << std::endl;
  std::cin  >> m_select_num;
  std::cout << "Fhase[" << m_select_num << "]�ֈړ����܂�" << std::endl;
  std::cout << std::endl;
}

void cTitle::draw(){
}

short cTitle::getSelectedNum(){
  return m_select_num;
}