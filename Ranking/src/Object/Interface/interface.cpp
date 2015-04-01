
#include "interface.h"
#include "interface_score.h"


void cInterface::init() {
  if (m_score == nullptr)
    m_score = std::make_shared<cInterfaceScore>(this);
}

void cInterface::update() {

}

void cInterface::draw() {
  m_score->draw();
}