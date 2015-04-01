
#pragma once
#include <memory>


class cScoreRandom;
class cMyScore;
class cDispScore;

class cScore {
public:

  cScore() = default;

  void init();

  void update();
  void draw();

  short getRandom();

  void dispScore(const short& score, int, int);


private:

  std::shared_ptr<cDispScore>   m_disp;
  std::shared_ptr<cScoreRandom> m_random;
  std::shared_ptr<cMyScore>     m_my_score;
};