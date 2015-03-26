
#pragma once
#include "../System/environment.h"
#include "../System/scene_manager.h"
#include "scene.h"


class cGameScene : public cScene {
public:

  cGameScene(cSceneManager*);

  void update();
  void draw();
};