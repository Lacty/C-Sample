
#pragma once
#include "../commont.h"
#include "object_interface.h"


class cObjectMove : public cObjectInterface{
private:
  int m_pos_x;
  int m_pos_y;

public:
  cObjectMove(cObject*);
  ~cObjectMove();

  void update();
  void getPos();
};