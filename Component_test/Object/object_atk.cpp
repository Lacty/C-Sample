
#include "object_atk.h"


cObjectAtk::cObjectAtk(cObject* obj) :
cObjectInterface(obj),
m_atk(0)
{
  std::cout << "�U���@�\��W�J" << std::endl;
}

cObjectAtk::~cObjectAtk(){
  std::cout << "�U��" << std::endl;
}