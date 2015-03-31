
#include "common.h"
#include "System/rank_player.hpp"


int main() {
  AppEnv env(WIDTH, HEIGHT);
  cRankPlayer rank(env);

  rank.run();
}
