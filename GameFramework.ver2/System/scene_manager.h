
#pragma once
#include "environment.h"


class cSceneManager {
public:

  cSceneManager() = default;

  void start();

  void update();
  void draw();

  void shiftNextScene();


private:


};