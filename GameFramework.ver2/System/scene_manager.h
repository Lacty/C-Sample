
#pragma once
#include "environment.h"
#include "../Scene/scene.h"
#include "../Scene/title.h"
#include <memory>


class cSceneManager {
public:

  cSceneManager() = default;

  void start();

  void update();
  void draw();

  void shiftNextScene(std::shared_ptr<cScene> next_scene);


private:

  std::shared_ptr<cScene> m_current_scene;
};