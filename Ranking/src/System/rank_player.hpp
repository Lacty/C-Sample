
#include "env.h"
#include "../Object/Score/score.h"
#include "../Object/Interface/interface.h"


class cRankPlayer {
public:

  cRankPlayer() = default;

  void run(){
    while (cEnv::get()->isOpen()){
      cEnv::get()->begin();


      cEnv::get()->end();
    }
  }

private:

};