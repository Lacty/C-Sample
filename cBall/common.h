
#pragma once
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"

enum Window {
  WIDTH = 512,
  HEIGHT = 512
};


// Mylib
struct float2{
  float x;
  float y;
  float2(){
    x = 0;
    y = 0;
  }
  float2(float x, float y){
    this->x = x;
    this->y = y;
  }
};
