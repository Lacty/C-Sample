
#include <iostream>


class cObjectAtk;
class cObjectMove;
class cObjectInterface;

class cObject{
private:
  cObjectAtk* m_atk;
  cObjectMove* m_move;

public:
  cObject(){
    std::cout << "�L�����N�^�[�o��" << std::endl;
  }

  ~cObject(){
    if (m_atk != nullptr)
      delete m_atk;

    if (m_move != nullptr)
      delete m_move;

    std::cout << std::endl;
    std::cout << "�L�����N�^�[�ޏ�" << std::endl;
  }

  void componentInit(){
    if (m_atk == nullptr)
      m_atk = new cObjectAtk(this);

    if (m_move == nullptr)
      m_move = new cObjectMove(this);
  }

};

class cObjectInterface{
protected:
  cObject* m_obj;

  cObjectInterface(cObject* obj) :
    m_obj(obj){
    std::cout << "�@�\��W�J" << std::endl;
  }
  ~cObjectInterface(){
    std::cout << "�@�\���~" << std::endl;
  }
};

class cObjectAtk : public cObjectInterface{
private:
  int m_atk_pow;

public:
  cObjectAtk(cObject* obj) :
    cObjectInterface(obj),
    m_atk_pow(0){
    std::cout << "�U���@�\��W�J" << std::endl;
  }

  ~cObjectAtk(){
    std::cout << "�U���@�\���~" << std::endl;
  }

};

class cObjectMove : public cObjectInterface{
private:
  int m_pos_x;

public:
  cObjectMove(cObject* obj) :
    cObjectInterface(obj),
    m_pos_x(0){
    std::cout << "�ړ��@�\��W�J" << std::endl;
  }
  ~cObjectMove(){
    std::cout << "�ړ��@�\���~" << std::endl;
  }

};

int main(){
  cObject obj;
  obj.componentInit();

  return 0;
}