
#pragma once
#include "../../common.h"
#include "../object_interface.h"


class cHere : public cObjectInterface {
public:

  cHere(cInterface*);

  void draw();


private:

  Texture here_img;

  enum InitState {
    POS_X  = -240,
    POS_Y  = 70,
    SIZE_W = 128,
    SIZE_H = 64
  };
  enum Rane {
    RANE_Y = -70
  };
};