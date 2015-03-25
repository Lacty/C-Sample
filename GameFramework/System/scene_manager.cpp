
#include "scene_manager.h"


void cSceneManager::update(){
  m_title.update();

  m_fhase = new cFhase(m_title.getSelectedNum());
  m_fhase->update();
}

void cSceneManager::draw(){
  m_title.draw();
  m_fhase->draw();
}