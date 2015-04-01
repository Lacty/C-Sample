
#pragma once
#include "../object_interface.h"
#include <vector>


class cRanking : public cObjectInterface {
public:

  cRanking(cScore*);

  void update();
  void draw();

  std::vector<short> getRankScore();
  int getRankingMax();


private:

  enum Ranking {
    RANKING_MAX = 5,
    RANE_Y = -70
  };
  enum InitPos {
    POS_X = -100,
    POS_Y = 70
  };


  void loadScore();
  void sortRanking();

  std::vector<short> rank_score;
};