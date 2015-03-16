
#include <iostream>
#include <string>

//基底クラス
class Animal{
protected:
  std::string name;

public:
  Animal(){
    std::cout << "Animalクラスのコンストラクタが呼ばれました" << std::endl;
  }
  
  virtual void sayMyName() = 0;
};

//子クラス:cat
class Cat : public Animal{
public:
  Cat(){
    name = "cat";
    std::cout << "Catクラスのコンストラクタが呼ばれました" << std::endl;
  }
  void sayMyName(){
    std::cout << "名前は" << name << "です" << std::endl;
  }
};

//子クラス:dog
class Dog : public Animal{
public:
  Dog(){
    name = "dog";
    std::cout << "Dogクラスのコンストラクタが呼ばれました" << std::endl;
  }
  void sayMyName(){
    std::cout << "名前は" << name << "です" << std::endl;
  }
};

int main(){
  Animal* cat = new Cat;
  cat->sayMyName();

  Animal* dog = new Dog;
  dog->sayMyName();

  return 0;
}