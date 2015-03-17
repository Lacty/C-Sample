
#include "object.h"


cObject::cObject(){
  std::cout << "�L�����N�^�[�o��" << std::endl;
  std::cout << std::endl;
}

cObject::~cObject(){
  if (m_atk != nullptr)
    delete m_atk;
  
  if (m_move != nullptr)
    delete m_move;
  
  std::cout << std::endl;
  std::cout << "�L�����N�^�[�ޏ�" << std::endl;
}

void cObject::componentInit(){
  if (m_atk == nullptr)
    m_atk = new cObjectAtk(this);

  if (m_move == nullptr)
    m_move = new cObjectMove(this);
}

bool cObject::isAtk(){
  return m_atk->isAtk();
}

void cObject::update(){
  std::cout << "�L�����N�^�s���J�n" << std::endl;

  m_move->update();
  std::cout << std::endl;

  m_atk->update();
  std::cout << std::endl;

  m_atk->powUp();
  std::cout << std::endl;

  m_atk->update();
  std::cout << std::endl;

  m_move->update();
  std::cout << std::endl;
}

void cObject::draw(){
  std::cout << "�L�����N�^�̕`��" << std::endl;
  m_move->getPos();
  std::cout << std::endl;
}