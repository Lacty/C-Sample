
#include "../object_interface.h"
#include "../../common.h"


class cScoreRandom : public cObjectInterface {
public:

  cScoreRandom(cScore*);

  short get();


private:

  void  init();

  enum RandomNum {
    FIRST = 0,
    LAST  = 50
  };

  Random m_random;
};