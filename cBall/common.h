
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

  static float2 Zero(){ return float2(0, 0); }
  
  float2(float fx, float fy) : x(fx), y(fy){}
};
