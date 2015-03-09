
#include "Ball.h"


cBall::cBall(Random& random,
             const float2& mouse_pos) :
m_pos  (float2::Zero()),
m_speed(float2::Zero())
{
  m_pos     = mouse_pos;
  m_speed.x = random.fromFirstToLast(-4.0f, 4.0f);
  m_speed.y = random.fromFirstToLast(-4.0f, 4.0f);
}

void cBall::Move(){
  m_pos.x += m_speed.x;
  m_pos.y += m_speed.y;
}

void cBall::Bound(){
  if ((m_pos.x - RADIUS < m_edge.left) ||
      (m_pos.x + RADIUS > m_edge.rigth))
  {
    m_speed.x *= -1;
    m_pos.x = std::max(m_pos.x, m_edge.left + RADIUS);
    m_pos.x = std::min(m_pos.x, m_edge.rigth - RADIUS);
  }

  if ((m_pos.y - RADIUS < m_edge.bottom) ||
      (m_pos.y + RADIUS > m_edge.top))
  {
    m_speed.y *= -1;
    m_pos.y = std::max(m_pos.y, m_edge.bottom + RADIUS);
    m_pos.y = std::min(m_pos.y, m_edge.top - RADIUS);
  }
}

void cBall::Gravity(){
  m_speed.y += GRAVITY_POWER;
}

void cBall::Update(){
  Move();
  Bound();
}

void cBall::Draw(){
  drawFillCircle(m_pos.x, m_pos.y,
                 RADIUS, RADIUS,
                 DIVISION,
                 Color(1, 1, 1));
}