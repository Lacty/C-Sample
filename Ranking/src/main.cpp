
#include "System/env.h"
#include "System/rank_player.hpp"


int main() {
  cEnv::get();

  cRankPlayer rank;
  rank.run();
}
