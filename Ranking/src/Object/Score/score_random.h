
#include "../object_interface.h"
#include "../../common.h"


class cScoreRandom : public cObjectInterface {
public:

  cScoreRandom(cScore*);

  void  initRandom();
  short getRandom();


private:

  enum RandomNum {
    FIRST = 0,
    LAST  = 50
  };

  Random random;
};