
#pragma once
#include "../commont.h"
#include "object_interface.h"


class cObjectAtk : public cObjectInterface{
private:
  int m_atk_pow;

public:
  cObjectAtk(cObject*);
  ~cObjectAtk();

  bool isAtk();
  void powUp();
  
  void update();
};