
#include "fhase.h"


cFhase::cFhase(short num) :
m_fhase_num(num)
{
  std::cout << "[" << m_fhase_num << "]�Ԗڂ�Fhase�ɓ���" << std::endl;

  // path���w��
  std::ostringstream oss;
  oss << "res/fhase" << m_fhase_num << ".txt";
  m_str_path = oss.str();

  // �w�肳�ꂽpath��.txt����G�̐��𒊏o
  std::ifstream fstr(m_str_path);
  fstr >> m_enemy_val;
}


void cFhase::update(){
  std::cout << "[" << m_fhase_num << "]�Ԗڂ�Fhase���v���C��" << std::endl;
  outputEnemyNum();
}

void cFhase::draw(){

}

void cFhase::outputEnemyNum(){
  std::cout << "�G�̐���[" << m_enemy_val << "]�̂��I" << std::endl;
}