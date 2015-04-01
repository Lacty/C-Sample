
#pragma once
#include "../../common.h"
#include "../object_interface.h"


class cMyScore : public cObjectInterface {
public:

  cMyScore(cScore*);

  void update();
  void draw();


private:

  void loadScore();

  short m_score;

  enum InitPos {
    POS_X = -100,
    POS_Y = 170
  };

  enum PointState {
    SPRITE_SIZE  = 80,
    L_POINT_SIZE = 60,
    S_POINT_SIZE = 40,

    L_RANE_X = 26,
    S_RANE_X = 22
  };

  Texture large_img;
  Texture small_img;
};