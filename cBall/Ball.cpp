
#include "Ball.h"


cBall::cBall(const AppEnv& env) : env(env){
  m_ball.isCreate = false;
}

void cBall::CreateBall(){
  const float RADIUS = 10;
  Random r;
  r.setSeed(unsigned int(time(nullptr))); // u_int使わず行けるか確認

  m_ball.pos = float2();
  m_ball.radius = RADIUS;
  m_ball.speed.x = r.fromFirstToLast(-4.0f, 4.0f);
  m_ball.speed.y = r.fromFirstToLast(-4.0f, 4.0f);
  m_ball.isCreate = true;
}

void cBall::Move(){
  m_ball.pos.x += m_ball.speed.x;
  m_ball.pos.y += m_ball.speed.y;
}

void cBall::Bound(){
  if ((m_ball.pos.x - m_ball.radius < -Window::WIDTH * 0.5f) ||
      (m_ball.pos.x + m_ball.radius >  Window::WIDTH * 0.5f))
  {
    m_ball.speed.x *= SIGN;
    m_ball.pos.x = std::max(m_ball.pos.x - m_ball.radius, -Window::WIDTH * 0.5f);
    m_ball.pos.x = std::min(m_ball.pos.x + m_ball.radius,  Window::WIDTH * 0.5f);
  }

  if ((m_ball.pos.y - m_ball.radius < -Window::HEIGHT * 0.5f) ||
      (m_ball.pos.y + m_ball.radius >  Window::HEIGHT * 0.5f))
  {
    m_ball.speed.y *= SIGN;
    m_ball.pos.y = std::max(m_ball.pos.y - m_ball.radius, -Window::HEIGHT * 0.5f);
    m_ball.pos.y = std::min(m_ball.pos.y + m_ball.radius,  Window::HEIGHT * 0.5f);
  }
}

void cBall::Update(){
  if (!m_ball.isCreate){
    CreateBall();
  }
  Move();
  Bound();
}

void cBall::Draw(){
  static const int BALL_DIVISION = 100;
  drawFillCircle(m_ball.pos.x, m_ball.pos.y,
                 m_ball.radius, m_ball.radius,
                 BALL_DIVISION,
                 Color(1, 1, 1));
}