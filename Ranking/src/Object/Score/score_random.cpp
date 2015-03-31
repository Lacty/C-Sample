
#include "score_random.h"


cScoreRandom::cScoreRandom(cScore* obj) :
cObjectInterface(obj) {}


void cScoreRandom::initRandom() {
  random.setSeed(u_int(time(nullptr)));
}

short cScoreRandom::getRandom() {
  return random(FIRST, LAST);
}