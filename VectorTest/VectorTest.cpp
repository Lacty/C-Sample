
#include "stdafx.h"
#include <iostream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
  std::vector<int> ary;


  for (int i = 0; i < 2; ++i){
    // .push_back("’†‚É“ü‚ê‚é‚à‚Ì");
    ary.push_back(2);
  }

  // ”z—ñ‚Ì—v‘f”
  std::cout << ary.size() << std::endl;

  // ”z—ñ‚O”Ô–Ú‚Ì’†g
  std::cout << ary[0] << std::endl;

  // warning C4018: '<' : signed/unsigned mismatch
  // .size()‚Íunsigned‚Å•Ô‚é‚Ì‚É”äŠr‘ÎÛ"int i"‚ªsigned‚Å‚·‚æ‚Á‚ÄŒx
  for (int i = 0; i < ary.size(); ++i){
    std::cout << ary[i] << std::endl;
  }

	return 0;
}

