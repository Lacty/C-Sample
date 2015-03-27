
#pragma once
#include "../common.hpp"
#include <string>
#include <fstream>
#include <sstream>


class cDataLoader {
public:

  cDataLoader() = default;

  std::string output(const int fhase){
    std::stringstream file_path;
    file_path << "res/phase" << fhase << ".txt";

    int enemy_num;
    std::fstream fstr(file_path.str());
    fstr >> enemy_num;

    std::stringstream sstr_out;
    sstr_out << "“G‚Ì”: " << enemy_num << " ‘Ì";

    return sstr_out.str();
  }
};