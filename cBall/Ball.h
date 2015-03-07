
#pragma once
#include "common.h"
#include "lib/random.hpp"
#include <ctime>
#include <algorithm>


class cBall{
private:
  const AppEnv& env;

  struct Object{
    bool isCreate;
    float2 pos;
    float  radius;
    float2 speed;
  }m_ball;
  const int SIGN = -1;

  void CreateBall();
  void Move();
  void Bound();

public:
  cBall(const AppEnv& env);

  void Update();
  void Draw();

};