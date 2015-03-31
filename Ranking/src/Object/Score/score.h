
#pragma once
#include <memory>


class cScoreRandom;

class cScore {
public:

  cScore() = default;

  void init();

  void update();
  void draw();


private:

  std::shared_ptr<cScoreRandom> m_random;
};