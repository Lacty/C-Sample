
#pragma once
#include "../commont.h"

class cObject;


class cObjectInterface{
protected:
  cObject* m_obj;

  cObjectInterface(cObject*);
  ~cObjectInterface();
};