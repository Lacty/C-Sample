
#include "object_atk.h"


cObjectAtk::cObjectAtk(cObject* obj) :
cObjectInterface(obj),
m_atk_pow(0)
{
  std::cout << "UŒ‚‹@”\‚ð“WŠJ" << std::endl;
}

cObjectAtk::~cObjectAtk(){
  std::cout << "UŒ‚" << std::endl;
}

bool cObjectAtk::isAtk(){
  return m_atk_pow != 0;
}

void cObjectAtk::powUp(){
  std::cout << "UŒ‚—Íã¸" << std::endl;
  m_atk_pow = 10;
}

void cObjectAtk::update(){
  std::cout << "ƒLƒƒƒ‰ƒNƒ^‚ÌUŒ‚I" << std::endl;
  std::cout << "..UŒ‚—Í = " << m_atk_pow << std::endl;
}
