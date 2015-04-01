
#pragma once
#include "../object_interface.h"


class cMyScore : public cObjectInterface {
public:

  cMyScore(cScore*);

  void update();
  void draw();

  short getMyScore() const;
  bool isUpdate();


private:

  void loadScore();

  short m_point;

  enum InitPos {
    POS_X = -100,
    POS_Y = 170
  };
};