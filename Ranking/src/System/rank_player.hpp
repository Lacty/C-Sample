
#include "../common.h"


class cRankPlayer {
public:

  cRankPlayer(AppEnv& env) :
  m_env(env) {}

  void run(){
    while (m_env.isOpen()){
      m_env.begin();


      m_env.end();
    }
  }

private:

  AppEnv& m_env;
};