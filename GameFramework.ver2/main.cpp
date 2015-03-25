
#include "System/environment.h"
#include "System/game_player.hpp"


int main() {
  env::get();
  cGamePlayer game;
  game.run();
}
