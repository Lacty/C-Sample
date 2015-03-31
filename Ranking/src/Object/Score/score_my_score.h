
#pragma once
#include "../object_interface.h"


class cMyScore : public cObjectInterface {
public:

  cMyScore(cScore*);

  void update();
  void draw();


private:

  void loadScore();

  short m_score;
};