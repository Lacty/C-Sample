
#include "score_my_score.h"
#include "score.h"
#include "../../System/env.h"
#include <fstream>


cMyScore::cMyScore(cScore* obj) :
cObjectInterface(obj)
{
  loadScore();
}


void cMyScore::loadScore() {
  std::ifstream fstr("res/score.txt");
  fstr >> m_point;
}

void cMyScore::update() {
  if (!isUpdate()) return;
  m_point = m_score->getRandom();
}

void cMyScore::draw() {
  m_score->dispScore(m_point, POS_X, POS_Y);
}

short cMyScore::getMyScore() const {
  return m_point;
}

bool cMyScore::isUpdate() {
  return cEnv::get()->isPushButton(LEFT);
}