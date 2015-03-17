
#pragma once
#include "../commont.h"
#include "object_atk.h"
#include "object_move.h"


class cObject{
  cObjectAtk* m_atk;
  cObjectMove* m_move;

public:
  cObject();
  ~cObject();

  void componentInit();

};
