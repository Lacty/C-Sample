
#include "Player.h"


cPlayer::cPlayer(AppEnv& env) :
env(env),
m_pos(INIT_POSITION_X, INIT_POSITION_Y),
m_size(INIT_SIZE_WIDTH, INIT_SIZE_HEIGHT),
m_vy(0.0f),
m_isJumping(false){}


void cPlayer::Gravity(){
  if (!m_isJumping)return;
  m_vy += GRAVITY_POWER;
  m_pos.y += m_vy;
}

void cPlayer::Jump(){
  if (m_isJumping)return;
  if (env.isPushKey(GLFW_KEY_SPACE)){
    m_isJumping = true;
    m_vy = JUMP_POWER;
  }
}

void cPlayer::Land(){
  if (m_pos.y < GROUND_LINE){
    m_isJumping = false;
    m_pos.y = GROUND_LINE;
    m_vy = 0;
  }
}

void cPlayer::Update(){
  Gravity();
  Jump();
  Land();
}

void cPlayer::Draw(){
  drawFillBox(m_pos.x, m_pos.y,
              m_size.x, m_size.y,
              Color(1, 1, 1));
}
