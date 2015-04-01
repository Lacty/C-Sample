
#pragma once
#include <memory>


class cInterfaceScore;

class cInterface {
public:

  cInterface();

  void init();

  void update();
  void draw();


private:

  std::shared_ptr<cInterfaceScore> m_score;
};