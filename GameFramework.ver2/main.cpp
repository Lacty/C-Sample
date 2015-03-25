
#include "common.hpp"
#include "System/environment.h"


int main() {
  while (env::get()->isOpen()) {
    env::get()->begin();

    env::get()->end();
  }
}
