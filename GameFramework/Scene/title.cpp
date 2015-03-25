
#include "title.h"


cTitle::cTitle() :
m_select_num(0)
{
  std::cout << "titleシーン" << std::endl;
}


void cTitle::update(){
  std::cout << "進むステージを選んでください" << std::endl;
  std::cin  >> m_select_num;
  std::cout << "Fhase[" << m_select_num << "]へ移動します" << std::endl;
  std::cout << std::endl;
}

void cTitle::draw(){
}

short cTitle::getSelectedNum(){
  return m_select_num;
}