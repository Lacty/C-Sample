
#pragma once
#include "../System/environment.h"
#include "../System/scene_manager.h"
#include "scene.h"


class cTitle : public cScene {
public:

  cTitle(cSceneManager*);

  void update();
  void draw();
};