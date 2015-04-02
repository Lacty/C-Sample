
#pragma once
#include <vector>
#include <memory>


class cDispScore;
class cScoreRandom;
class cMyScore;
class cRanking;

class cScore {
public:

  cScore() = default;

  void init();

  void update();
  void draw();

  short getRandom()     const;
  short getMyScore()    const;
  bool  isRankIn()      const;
  bool  isUpdate()      const;
  int   getMyRank()     const;

  void dispScore(const short& score, int, int) const;


private:

  std::shared_ptr<cDispScore>   m_disp;
  std::shared_ptr<cScoreRandom> m_random;
  std::shared_ptr<cMyScore>     m_my_score;
  std::shared_ptr<cRanking>     m_ranking;
};