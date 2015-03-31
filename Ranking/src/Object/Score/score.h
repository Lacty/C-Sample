
#pragma once
#include <memory>


class cScoreRandom;
class cMyScore;

class cScore {
public:

  cScore() = default;

  void init();

  void update();
  void draw();

  short getRandom();


private:

  std::shared_ptr<cScoreRandom> m_random;
  std::shared_ptr<cMyScore>     m_my_score;
};