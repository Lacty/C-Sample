
#pragma once
#include "../commont.h"
#include "object_interface.h"


class cObjectAtk : public cObjectInterface{
private:
  int m_atk;

public:
  cObjectAtk(cObject*);
  ~cObjectAtk();

};