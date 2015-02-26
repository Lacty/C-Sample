//
// •¶š—ñ‚ğ”ò‚Î‚µ‚Ä”š‚¾‚¯E‚¤ƒTƒ“ƒvƒ‹
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
  /* data.txt
   * yanai 2
   * akira 3
   */
  std::ifstream fstr("res/data.txt");
  std::string temp;
  int num[2];

  fstr >> temp; fstr >> num[0];
  fstr >> temp; fstr >> num[1];
  temp.clear();

  for (int i = 0; i < 2; ++i){
    std::cout << num[i] << std::endl;
  }
  std::cout << temp << std::endl;

  return 0;
}