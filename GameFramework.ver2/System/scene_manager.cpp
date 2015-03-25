
#include "scene_manager.h"


void cSceneManager::start(){
  m_current_scene = std::make_shared<cTitle>(this);
}


void cSceneManager::update(){
  m_current_scene->update();
}

void cSceneManager::draw(){
  env::get()->begin();

  m_current_scene->draw();

  env::get()->end();
}

void cSceneManager::shiftNextScene(std::shared_ptr<cScene> next_scene){
  m_current_scene = next_scene;
}