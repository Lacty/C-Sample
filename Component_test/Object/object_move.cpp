
#include "object_move.h"


cObjectMove::cObjectMove(cObject* obj) :
cObjectInterface(obj),
m_pos_x(0),
m_pos_y(0)
{
  std::cout << "�ړ��@�\��W�J" << std::endl;
}

cObjectMove::~cObjectMove(){
  std::cout << "�ړ�����" << std::endl;
}