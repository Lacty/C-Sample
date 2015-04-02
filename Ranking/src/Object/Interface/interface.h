
#pragma once
#include <memory>


class cInterfaceScore;
class cHere;

class cInterface {
public:

  cInterface() = default;

  void init();

  void draw();


private:

  std::shared_ptr<cInterfaceScore> m_score;
  std::shared_ptr<cHere>           m_here;
};