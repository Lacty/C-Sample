
#include "score.h"
#include "score_random.h"
#include "score_my_score.h"


void cScore::init() {
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