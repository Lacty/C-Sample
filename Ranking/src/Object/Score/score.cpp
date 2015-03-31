
#include "score.h"
#include "score_random.h"


void cScore::init() {
  if (m_random == nullptr)
    m_random = std::make_shared<cScoreRandom>(this);
}

void cScore::update() {

}

void cScore::draw() {
  drawBox(0, 0, 10, 10, 2, Color(1, 1, 1));
}