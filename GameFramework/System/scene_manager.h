
#pragma once
#include "../Scene/title.h"
#include "../Scene/fhase.h"


class cSceneManager {
public:

  cSceneManager() = default;

  void update();
  void draw();


private:

  cTitle m_title;
  cFhase* m_fhase;
};