
#include "object.h"
#include "object_move.h"


cObjectMove::cObjectMove(cObject* obj) :
cObjectInterface(obj),
m_pos_x(0),
m_pos_y(0)
{
  std::cout << "ˆÚ“®‹@”\‚ð“WŠJ" << std::endl;
}

cObjectMove::~cObjectMove(){
  std::cout << "ˆÚ“®" << std::endl;
}

void cObjectMove::update(){
  if (m_obj->isAtk()){
    std::cout << "UŒ‚’†‚ÍˆÚ“®‚Å‚«‚È‚¢" << std::endl;
    return;
  }

  std::cout << "ˆÚ“®’†" << std::endl;
  m_pos_x += 10;
  m_pos_y += 10;
}

void cObjectMove::getPos(){
  std::cout << "Œ»Ý’n..." << std::endl;
  std::cout << "...pos_x = " << m_pos_x << std::endl;
  std::cout << "...pos_y = " << m_pos_y << std::endl;
  std::cout << std::endl;
}