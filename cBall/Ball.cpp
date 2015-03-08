
#include "Ball.h"


cBall::cBall(AppEnv& env) :
env(env),
m_pos(float2::Zero()),
m_speed(float2::Zero())
{
  CreateBall();
}

void cBall::CreateBall(){
  Random r;
  r.setSeed(u_int(time(nullptr)));

  m_speed.x = r.fromFirstToLast(-4.0f, 4.0f);
  m_speed.y = r.fromFirstToLast(-4.0f, 4.0f);
}

void cBall::Move(){
  m_pos.x += m_speed.x;
  m_pos.y += m_speed.y;
}

void cBall::Gravity(){
  if (!env.isPressKey('G'))return;
  m_speed.y += GRAVITY_POWER;
}

void cBall::Bound(){
  if ((m_pos.x - RADIUS < -Window::WIDTH * 0.5f) ||
      (m_pos.x + RADIUS >  Window::WIDTH * 0.5f))
  {
    m_speed.x *= -1;
    m_pos.x = std::max(m_pos.x, -Window::WIDTH * 0.5f);
    m_pos.x = std::min(m_pos.x,  Window::WIDTH * 0.5f);
  }

  if ((m_pos.y - RADIUS < -Window::HEIGHT * 0.5f) ||
      (m_pos.y + RADIUS >  Window::HEIGHT * 0.5f))
  {
    m_speed.y *= -1;
    m_pos.y = std::max(m_pos.y, -Window::HEIGHT * 0.5f);
    m_pos.y = std::min(m_pos.y,  Window::HEIGHT * 0.5f);
  }
}

void cBall::Update(){
  Move();
  Gravity();
  Bound();
}

void cBall::Draw(){
  drawFillCircle(m_pos.x, m_pos.y,
                 RADIUS, RADIUS,
                 BALL_DIVISION,
                 Color(1, 1, 1));
}