
#include "environment.h"


AppEnv* env::get() {
  static AppEnv s_env(WIDTH, HEIGHT);
  return &s_env;
}