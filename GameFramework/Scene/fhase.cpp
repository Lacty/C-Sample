
#include "fhase.h"


cFhase::cFhase(short num) :
m_fhase_num(num)
{
  std::cout << "[" << m_fhase_num << "]番目のFhaseに到着" << std::endl;

  // pathを指定
  std::ostringstream oss;
  oss << "res/fhase" << m_fhase_num << ".txt";
  m_str_path = oss.str();

  // 指定されたpathの.txtから敵の数を抽出
  std::ifstream fstr(m_str_path);
  fstr >> m_enemy_val;
}


void cFhase::update(){
  std::cout << "[" << m_fhase_num << "]番目のFhaseをプレイ中" << std::endl;
  outputEnemyNum();
}

void cFhase::draw(){

}

void cFhase::outputEnemyNum(){
  std::cout << "敵の数は[" << m_enemy_val << "]体だ！" << std::endl;
}