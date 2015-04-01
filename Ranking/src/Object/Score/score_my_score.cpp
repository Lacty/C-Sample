
#include "score_my_score.h"
#include "score.h"
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

}

void cMyScore::draw() {
  m_score->dispScore(m_point, POS_X, POS_Y);
}