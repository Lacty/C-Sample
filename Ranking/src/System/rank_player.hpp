
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

      //------�`��J�n-------//
      cEnv::get()->begin();

      m_score.draw();

      //------�`��I��------//
      cEnv::get()->end();
    }
  }

private:

  cScore m_score;
};