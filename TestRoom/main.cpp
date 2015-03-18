
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
    std::cout << "キャラクター登場" << std::endl;
  }

  ~cObject(){
    if (m_atk != nullptr)
      delete m_atk;

    if (m_move != nullptr)
      delete m_move;

    std::cout << std::endl;
    std::cout << "キャラクター退場" << std::endl;
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
    std::cout << "機能を展開" << std::endl;
  }
  ~cObjectInterface(){
    std::cout << "機能を停止" << std::endl;
  }
};

class cObjectAtk : public cObjectInterface{
private:
  int m_atk_pow;

public:
  cObjectAtk(cObject* obj) :
    cObjectInterface(obj),
    m_atk_pow(0){
    std::cout << "攻撃機能を展開" << std::endl;
  }

  ~cObjectAtk(){
    std::cout << "攻撃機能を停止" << std::endl;
  }

};

class cObjectMove : public cObjectInterface{
private:
  int m_pos_x;

public:
  cObjectMove(cObject* obj) :
    cObjectInterface(obj),
    m_pos_x(0){
    std::cout << "移動機能を展開" << std::endl;
  }
  ~cObjectMove(){
    std::cout << "移動機能を停止" << std::endl;
  }

};

int main(){
  cObject obj;
  obj.componentInit();

  return 0;
}