
#include <iostream>
#include <list>


int main() {
  std::list<int> va;

  for (int i = 0; i < 10; ++i) {
    va.push_back(i);
  }

  auto it = va.begin();
  while (it != va.end()) {
    std::cout << *it << ",";
    ++it;
  }

  std::cout << std::endl;
  it = va.begin();
  while (it != va.end()) {
    if ((*it) == 5){
      it = va.erase(it);
    }
    else ++it;
  }

  std::cout << std::endl;
  it = va.begin();
  while (it != va.end()) {
    std::cout << *it << ",";
    ++it;
  }

  return 0;
}