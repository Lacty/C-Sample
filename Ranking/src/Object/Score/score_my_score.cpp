
#include "score_my_score.h"
#include <fstream>
#include <iostream>


cMyScore::cMyScore(cScore* obj) :
cObjectInterface(obj)
{
  loadScore();
}


void cMyScore::loadScore() {
  std::ifstream fstr("res/score.txt");
  fstr >> m_score;
}

void cMyScore::update() {

}

void cMyScore::draw() {

}