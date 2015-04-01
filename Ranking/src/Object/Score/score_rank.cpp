
#include "score_rank.h"
#include "score.h"
#include <fstream>
#include <algorithm>
#include <functional>


cRanking::cRanking(cScore* obj) :
cObjectInterface(obj)
{
  loadScore();
}


void cRanking::loadScore() {
  std::ifstream fstr("res/score.txt");
  short temp;

  for (int count = 0; count < RANKING_MAX; ++count) {
    fstr >> temp;
    rank_score.emplace_back(temp);
  }
}

void cRanking::sortRanking() {
  std::sort(rank_score.begin(), rank_score.end(), std::greater<int>());
}

void cRanking::update() {
  if (!m_score->isUpdate()) return;
  rank_score.emplace_back(m_score->getMyScore());
  sortRanking();
}

void cRanking::draw() {
  int pos_x = POS_X;
  int pos_y = POS_Y;
  for (int count = 0; count < RANKING_MAX; ++count) {
    m_score->dispScore(rank_score.at(count), pos_x, pos_y);
    pos_y += RANE_Y;
  }
}

std::vector<short> cRanking::getRankScore() {
  return rank_score;
}

int cRanking::getRankingMax() {
  return RANKING_MAX;
}