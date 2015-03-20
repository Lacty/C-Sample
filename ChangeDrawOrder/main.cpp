
#include "lib/framework.hpp"

enum WindowSize {
  WIDTH  = 512,
  HEIGHT = 512,
};


struct float2{
  float x;
  float y;

  float2(const float fx = 0.0f, const float fy = 0.0f) :
    x(fx), y(fy) {}

  float2(const Vec2f& other) :
    x(other.x()), y(other.y()) {}
};

struct Object{
  float2 m_pos;
  float  m_r;
  float  m_div;
  Color  m_col;
};

class cCircle{
private:
  AppEnv& m_env;
  Object front_obj;
  Object back_obj;

  void swipe(){
    Object temp = front_obj;
    front_obj = back_obj;
    back_obj = temp;
  }

public:
  cCircle(AppEnv& env, const Object& front, const Object& back) :
    m_env(env), front_obj(front), back_obj(back) {};

  void update(){
    if (!m_env.isPushButton(Mouse::LEFT))return;
    swipe();
  }
  void draw(){
    drawFillCircle(back_obj.m_pos.x, back_obj.m_pos.y,
                   back_obj.m_r, back_obj.m_r,
                   back_obj.m_div,
                   back_obj.m_col);
    drawFillCircle(front_obj.m_pos.x, front_obj.m_pos.y,
                   front_obj.m_r,  front_obj.m_r,
                   front_obj.m_div,
                   front_obj.m_col);
  }
};

int main() {
  AppEnv env(WIDTH, HEIGHT);

  Object red;
  red.m_pos = float2(50.0f, 0.0f);
  red.m_r   = 100.0f;
  red.m_div = 100.0f;
  red.m_col = Color(1, 0, 0);

  Object blu;
  blu.m_pos = float2(-50.0f, 0.0f);
  blu.m_r   = 100.0f;
  blu.m_div = 100.0f;
  blu.m_col = Color(0, 1, 0);

  cCircle circle(env, red, blu);

  while (env.isOpen()) {
    circle.update();

    env.begin();

    circle.draw();

    env.end();
  }
}
