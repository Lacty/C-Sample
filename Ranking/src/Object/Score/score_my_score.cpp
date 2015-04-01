
#include "score_my_score.h"
#include <fstream>
#include <iostream>


cMyScore::cMyScore(cScore* obj) :
cObjectInterface(obj),
large_img(Texture("res/miku_point.png")),
small_img(Texture("res/miku_point_1.png"))
{
  loadScore();
}


void cMyScore::loadScore() {
  std::ifstream fstr("res/score.txt");
  fstr >> m_score;
}

void cMyScore::update() {

}

void cMyScore::draw() {
  short ten_point = m_score / 10;
  int pos_x = POS_X;
  int pos_y = POS_Y;
  for (int count = 0; count < ten_point; ++count){
    drawTextureBox(pos_x, pos_y, L_POINT_SIZE, L_POINT_SIZE,
                   0, 0, SPRITE_SIZE, SPRITE_SIZE,
                   large_img,
                   Color(1, 1, 1));

    pos_x += L_RANE_X;
  }

  short one_point = m_score % 10;

  // large‚Æsmall‚Ì‹æŠÔ‚ðŠJ‚¯‚é
  if (ten_point != 0) pos_x += S_RANE_X / 2;

  for (int count = 0; count < one_point; ++count){
    drawTextureBox(pos_x, pos_y, S_POINT_SIZE, S_POINT_SIZE,
                   0, 0, SPRITE_SIZE, SPRITE_SIZE,
                   small_img,
                   Color(1, 1, 1));

    pos_x += S_RANE_X;
  }
}