
#pragma once
#include "../common.h"
#include "../float2.h"


class cPlayer{
private:
  AppEnv& env;

  enum PlayerInitStatus{
    INIT_POSITION_X  =    0,
    INIT_POSITION_Y  = -200,
    INIT_SIZE_WIDTH  =   20,
    INIT_SIZE_HEIGHT =   20
  };

  const float GRAVITY_POWER =   -0.2f;
  const float JUMP_POWER    =   10.0f;
  const float GROUND_LINE   = -200.0f;

  float2 m_pos;
  float2 m_size;
  float  m_vy;
  bool   m_isJumping;

  void Gravity();
  void Jump();
  void Land();

public:
  cPlayer(AppEnv&);

  void Update();
  void Draw();

};