
#include "env.h"
#include "../Object/Score/score.h"
#include "../Object/Interface/interface.h"


class cRankPlayer {
public:

  cRankPlayer() = default;

  void run(){
    m_score.init();
    m_interface.init();

    while (cEnv::get()->isOpen()){

      m_score.update();
      m_interface.update();

      //------�`��J�n-------//
      cEnv::get()->begin();

      m_score.draw();
      m_interface.draw();

      //------�`��I��------//
      cEnv::get()->end();
    }
  }

private:

  cScore     m_score;
  cInterface m_interface;
};