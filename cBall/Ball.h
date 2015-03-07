
#pragma once
#include "common.h"
#include "lib/random.hpp"
#include <ctime>
#include <algorithm>


class cBall{
private:
  AppEnv& env;

  struct Object{
    bool isCreate;
    float2 pos;
    float  radius;
    float2 speed;
  }m_ball;
  const int   SIGN = -1;
  const float GRAVITY_POWER = -0.2f;

  void CreateBall();
  void Move();
  void Gravity();
  void Bound();

public:
  cBall(AppEnv& env);

  void Update();
  void Draw();

};