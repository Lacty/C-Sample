
#include "env.h"
#include "../Object/Score/score.h"
#include "../Object/Interface/interface.h"


class cRankPlayer {
public:

  cRankPlayer() = default;

  void run(){
    m_score.init();

    while (cEnv::get()->isOpen()){

      m_score.update();

      //------•`‰æŠJŽn-------//
      cEnv::get()->begin();

      m_score.draw();

      //------•`‰æI—¹------//
      cEnv::get()->end();
    }
  }

private:

  cScore m_score;
};