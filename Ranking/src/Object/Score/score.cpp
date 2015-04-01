
#include "score.h"
#include "score_disp.h"
#include "score_random.h"
#include "score_my_score.h"
#include "score_rank.h"


void cScore::init() {
  if (m_disp == nullptr)
    m_disp = std::make_shared<cDispScore>(this);

  if (m_random == nullptr)
    m_random = std::make_shared<cScoreRandom>(this);

  if (m_my_score == nullptr)
    m_my_score = std::make_shared<cMyScore>(this);

  if (m_ranking == nullptr)
    m_ranking = std::make_shared<cRanking>(this);
}

void cScore::update() {
  m_my_score->update();
  m_ranking->update();
}

void cScore::draw() {
  m_my_score->draw();
  m_ranking->draw();
}

short cScore::getRandom() const {
  return m_random->get();
}

short cScore::getMyScore() const {
  return m_my_score->getMyScore();
}

std::vector<short> cScore::getRankScore() const {
  return m_ranking->getRankScore();
}

int cScore::getRankingMax() const {
  return m_ranking->getRankingMax();
}

bool cScore::isUpdate() const {
  return m_my_score->isUpdate();
}

void cScore::dispScore(const short& score, int Pos_x, int Pos_y) const {
  return m_disp->draw(score, Pos_x, Pos_y);
}