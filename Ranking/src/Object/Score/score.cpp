
#include "score.h"
#include "score_disp.h"
#include "score_random.h"
#include "score_my_score.h"


void cScore::init() {
  if (m_disp == nullptr)
    m_disp = std::make_shared<cDispScore>(this);

  if (m_random == nullptr)
    m_random = std::make_shared<cScoreRandom>(this);

  if (m_my_score == nullptr)
    m_my_score = std::make_shared<cMyScore>(this);
}

void cScore::update() {
  
}

void cScore::draw() {
  m_my_score->draw();
}

short cScore::getRandom() {
  return m_random->get();
}

void cScore::dispScore(const short& score, int Pos_x, int Pos_y) {
  return m_disp->draw(score, Pos_x, Pos_y);
}