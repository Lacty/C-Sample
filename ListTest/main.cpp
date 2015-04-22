
#include <iostream>
#include <list>


int main() {
  std::list<int> la;

  for (int i = 0; i < 10; ++i) {
    la.emplace_back(i);
  }

  for (auto it = la.begin(); it != la.end(); ++it) {
    std::cout << *it << ",";
  }
  std::cout << std::endl;

  for (auto it = la.begin(); it != la.end();) {
    if ((*it) == 5){
      it = la.erase(it);
      continue;
    }
    ++it;
  }

  for (auto it = la.begin(); it != la.end(); ++it) {
    std::cout << *it << ",";
  }

  return 0;
}