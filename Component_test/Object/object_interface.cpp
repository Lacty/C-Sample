
#include "object_interface.h"
#include "object.h"


cObjectInterface::cObjectInterface(cObject* obj) :
m_obj(obj)
{
  std::cout << "機能を展開" << std::endl;
}

cObjectInterface::~cObjectInterface(){
  std::cout << "機能を停止" << std::endl;
}