
#include "object.h"
#include "object_move.h"


cObjectMove::cObjectMove(cObject* obj) :
cObjectInterface(obj),
m_pos_x(0),
m_pos_y(0)
{
  std::cout << "移動機能を展開" << std::endl;
}

cObjectMove::~cObjectMove(){
  std::cout << "移動" << std::endl;
}

void cObjectMove::update(){
  if (m_obj->isAtk()){
    std::cout << "攻撃中は移動できない" << std::endl;
    return;
  }

  std::cout << "移動中" << std::endl;
  m_pos_x += 10;
  m_pos_y += 10;
}

void cObjectMove::getPos(){
  std::cout << "現在地..." << std::endl;
  std::cout << "...pos_x = " << m_pos_x << std::endl;
  std::cout << "...pos_y = " << m_pos_y << std::endl;
  std::cout << std::endl;
}