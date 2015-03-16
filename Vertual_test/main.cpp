
#include <iostream>
#include <string>

//���N���X
class Animal{
protected:
  std::string name;

public:
  Animal(){
    std::cout << "Animal�N���X�̃R���X�g���N�^���Ă΂�܂���" << std::endl;
  }
  
  virtual void sayMyName() = 0;
};

//�q�N���X:cat
class Cat : public Animal{
public:
  Cat(){
    name = "cat";
    std::cout << "Cat�N���X�̃R���X�g���N�^���Ă΂�܂���" << std::endl;
  }
  void sayMyName(){
    std::cout << "���O��" << name << "�ł�" << std::endl;
  }
};

//�q�N���X:dog
class Dog : public Animal{
public:
  Dog(){
    name = "dog";
    std::cout << "Dog�N���X�̃R���X�g���N�^���Ă΂�܂���" << std::endl;
  }
  void sayMyName(){
    std::cout << "���O��" << name << "�ł�" << std::endl;
  }
};

int main(){
  Animal* cat = new Cat;
  cat->sayMyName();

  Animal* dog = new Dog;
  dog->sayMyName();

  return 0;
}