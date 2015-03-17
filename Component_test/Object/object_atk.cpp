
#include "object_atk.h"


cObjectAtk::cObjectAtk(cObject* obj) :
cObjectInterface(obj),
m_atk_pow(0)
{
  std::cout << "�U���@�\��W�J" << std::endl;
}

cObjectAtk::~cObjectAtk(){
  std::cout << "�U��" << std::endl;
}

bool cObjectAtk::isAtk(){
  return m_atk_pow != 0;
}

void cObjectAtk::powUp(){
  std::cout << "�U���͏㏸" << std::endl;
  m_atk_pow = 10;
}

void cObjectAtk::update(){
  std::cout << "�L�����N�^�̍U���I" << std::endl;
  std::cout << "..�U���� = " << m_atk_pow << std::endl;
}
