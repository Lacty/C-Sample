
#pragma once
#include "../../common.h"
#include "../object_interface.h"


class cInterfaceScore : public cObjectInterface {
public:

  cInterfaceScore(cInterface*);

  void draw();


private:

  enum InitState {
    POS_X  = -240,
    POS_Y  = 160,
    SIZE_W = 128,
    SIZE_H = 64
  };

  float x;
  float y;
  float width;
  float height;

  Texture image;
};