
#include "interface_score.h"


cInterfaceScore::cInterfaceScore(cInterface* obj) :
cObjectInterface(obj),
x(POS_X),
y(POS_Y),
width(SIZE_W),
height(SIZE_H)
{
  image = Texture("res/score.png");
}


void cInterfaceScore::draw() {
  drawTextureBox(x, y, width, height,
                 0, 0, width, height,
                 image, Color::white);
}