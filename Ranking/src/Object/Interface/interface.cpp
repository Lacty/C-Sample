
#include "interface.h"
#include "interface_score.h"
#include "interface_here.h"


void cInterface::init() {
  if (m_score == nullptr)
    m_score = std::make_shared<cInterfaceScore>(this);

  if (m_here == nullptr)
    m_here = std::make_shared<cHere>(this);
}

void cInterface::draw() {
  m_score->draw();
  m_here->draw();
}