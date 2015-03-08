
#include "Ball.h"


cBall::cBall(AppEnv& env) :
env(env),
pos(float2::Zero()),
speed(float2::Zero())
{
  CreateBall();
}

void cBall::CreateBall(){
  Random r;
  r.setSeed(u_int(time(nullptr)));

  speed.x = r.fromFirstToLast(-4.0f, 4.0f);
  speed.y = r.fromFirstToLast(-4.0f, 4.0f);
}

void cBall::Move(){
  pos.x += speed.x;
  pos.y += speed.y;
}

void cBall::Gravity(){
  if (!env.isPressKey('G'))return;
  speed.y += GRAVITY_POWER;
}

void cBall::Bound(){
  if ((pos.x - RADIUS < -Window::WIDTH * 0.5f) ||
      (pos.x + RADIUS >  Window::WIDTH * 0.5f))
  {
    speed.x *= -1;
    pos.x = std::max(pos.x, -Window::WIDTH * 0.5f);
    pos.x = std::min(pos.x,  Window::WIDTH * 0.5f);
  }

  if ((pos.y - RADIUS < -Window::HEIGHT * 0.5f) ||
      (pos.y + RADIUS >  Window::HEIGHT * 0.5f))
  {
    speed.y *= -1;
    pos.y = std::max(pos.y, -Window::HEIGHT * 0.5f);
    pos.y = std::min(pos.y,  Window::HEIGHT * 0.5f);
  }
}

void cBall::Update(){
  Move();
  Gravity();
  Bound();
}

void cBall::Draw(){
  drawFillCircle(pos.x, pos.y,
                 RADIUS, RADIUS,
                 BALL_DIVISION,
                 Color(1, 1, 1));
}