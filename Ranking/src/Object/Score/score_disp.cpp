
#include "score_disp.h"


cDispScore::cDispScore(cScore* obj) :
cObjectInterface(obj),
large_img(Texture("res/miku_point.png")),
small_img(Texture("res/miku_point_1.png")) {}


void cDispScore::draw(const short& score, int Pos_x, int Pos_y) {
  short ten_point = score / 10;
  int pos_x = Pos_x;
  int pos_y = Pos_y;
  for (int count = 0; count < ten_point; ++count){
    drawTextureBox(pos_x, pos_y, L_POINT_SIZE, L_POINT_SIZE,
      0, 0, SPRITE_SIZE, SPRITE_SIZE,
      large_img,
      Color(1, 1, 1));

    pos_x += L_RANE_X;
  }

  short one_point = score % 10;

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