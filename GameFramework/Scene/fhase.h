
#pragma once
#include "scene.hpp"
#include <string>
#include <sstream>
#include <fstream>


class cFhase : public cScene {
public:

  cFhase(short);

  void update();
  void draw();


private:

  short m_fhase_num;
  short m_enemy_val;

  std::string m_str_path;

  void outputEnemyNum();
};