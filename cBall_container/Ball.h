
#pragma once
#include "common.h"
#include "float2.h"
#include "lib/random.hpp"
#include <vector>


class cBall{
private:
  float2 m_pos;
  float2 m_speed;

  enum BallParameter{
    RADIUS     = 10,
    DIVISION   = 100
  };
  const float GRAVITY_POWER = -0.2f;

  // ��ʒ[���
  struct Edge{
    float top     =  HEIGHT * 0.5f; // ��[
    float bottom  = -HEIGHT * 0.5f; // ���[
    float rigth   =  WIDTH  * 0.5f; // �E�[
    float left    = -WIDTH  * 0.5f; // ���[
  }m_edge;

  void Move();
  void Bound();

public:
  cBall(Random&, const float2&);

  void Gravity();
  void Update();
  void Draw();

};