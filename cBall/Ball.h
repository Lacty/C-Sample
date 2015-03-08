
#pragma once
#include "common.h"
#include "lib/random.hpp"
#include <ctime>
#include <algorithm>


class cBall{
private:
  AppEnv& env;

  float2 pos;
  float2 speed;

  const float GRAVITY_POWER = -0.2f;
  enum BallParameter{
    RADIUS        = 10,
    BALL_DIVISION = 100
  };

  void CreateBall();
  void Move();
  void Gravity();
  void Bound();

public:
  cBall(AppEnv& env);

  void Update();
  void Draw();

};