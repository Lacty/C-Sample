
#include "object_move.h"


cObjectMove::cObjectMove(cObject* obj) :
cObjectInterface(obj),
m_pos_x(0),
m_pos_y(0)
{
  std::cout << "移動機能を展開" << std::endl;
}

cObjectMove::~cObjectMove(){
  std::cout << "移動した" << std::endl;
}