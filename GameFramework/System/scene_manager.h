
#pragma once
#include "../Scene/title.h"


class cSceneManager {
public:

  cSceneManager() = default;

  void update();
  void draw();


private:

  cTitle m_title;
};