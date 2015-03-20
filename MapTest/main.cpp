
#include <iostream>
#include <string>
#include <map>


enum testID{
  EMPTY,
  FIRST_ID,   // 1
  SECOND_ID,  // 2
  THIRD_ID    // 3
};

int main(){
  std::map<testID, std::string> map_test;

  std::string str_temp;
  std::cout << "FIRST_ID�ł��A���O���L�����Ă�������" << std::endl;
  std::cin >> str_temp;
  std::cout << std::endl;

  map_test.insert(std::make_pair(FIRST_ID, str_temp));

  std::cout << "SECOND_ID�ł��A���O���L�����Ă�������" << std::endl;
  std::cin >> str_temp;
  std::cout << std::endl;

  map_test.insert(std::make_pair(SECOND_ID, str_temp));

  std::cout << "THIRD_ID�ł��A���O���L�����Ă�������" << std::endl;
  std::cin >> str_temp;
  std::cout << std::endl;

  map_test.insert(std::make_pair(THIRD_ID, str_temp));


  auto it_temp = map_test.find(FIRST_ID);
  std::cout << "FIRST_ID�̕��̂����O��" << it_temp->second;

  auto it_temp = map_test.find(SECOND_ID);
  std::cout << "SECOND_ID�̕��̂����O��" << it_temp->second;

  auto it_temp = map_test.find(THIRD_ID);
  std::cout << "THIRD_ID�̕��̂����O��" << it_temp->second;

  return 0;
}