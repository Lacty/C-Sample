
#include "object_interface.h"
#include "object.h"


cObjectInterface::cObjectInterface(cObject* obj) :
m_obj(obj)
{
  std::cout << "�@�\��W�J" << std::endl;
}

cObjectInterface::~cObjectInterface(){
  std::cout << "�@�\���~" << std::endl;
}