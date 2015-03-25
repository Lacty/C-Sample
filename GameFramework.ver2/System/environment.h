
#pragma once
#include "../common.hpp"


class cEnvironment {
public:

  static AppEnv* get();


private:

  cEnvironment() = default;
};

typedef cEnvironment env;