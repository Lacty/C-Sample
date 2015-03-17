
#include "object.h"


cObject::cObject(){
  std::cout << "�L�����N�^�[�o��" << std::endl;
  std::cout << std::endl;
}

cObject::~cObject(){
  if (m_atk != nullptr)
    delete m_atk;
  
  if (m_move != nullptr)
    delete m_move;
  
  std::cout << std::endl;
  std::cout << "�L�����N�^�[�ޏ�" << std::endl;
}

void cObject::componentInit(){
  if (m_atk == nullptr)
    m_atk = new cObjectAtk(this);

  if (m_move == nullptr)
    m_move = new cObjectMove(this);
}