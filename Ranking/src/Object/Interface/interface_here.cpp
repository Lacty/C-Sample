
#include "interface_here.h"
#include "../Score/score.h"
//#include "../Score/score_rank.h"


cHere::cHere(cInterface* obj) :
cObjectInterface(obj),
here_img(Texture("res/rank.png")) {}


void cHere::draw() {
  if (!m_score->isRankIn()) return;

  int pos_x = POS_X;
  int pos_y = POS_Y + RANE_Y * m_score->getMyRank();
  int width = SIZE_W;
  int height = SIZE_H;

  drawTextureBox(pos_x, pos_y, width, height,
    0, 0, width, height,
    here_img, Color(1, 1, 1));
}