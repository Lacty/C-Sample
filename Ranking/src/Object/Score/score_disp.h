
#pragma once
#include "../../common.h"
#include "../object_interface.h"


class cDispScore : public cObjectInterface {
public:

  cDispScore(cScore*);

  void draw(const short&, int, int);


private:

  enum PointState {
    SPRITE_SIZE = 80,
    L_POINT_SIZE = 60,
    S_POINT_SIZE = 40,

    L_RANE_X = 26,
    S_RANE_X = 22
  };

  Texture large_img;
  Texture small_img;
};