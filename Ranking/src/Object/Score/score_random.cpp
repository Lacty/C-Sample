
#include "score_random.h"


cScoreRandom::cScoreRandom(cScore* obj) :
cObjectInterface(obj)
{
  init();
}


void cScoreRandom::init() {
  m_random.setSeed(u_int(time(nullptr)));
}

short cScoreRandom::get() {
  return m_random(FIRST, LAST);
}