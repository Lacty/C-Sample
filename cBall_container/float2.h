
//MyLibrary
#pragma once

struct float2{
  float x;
  float y;
  float2(float fx, float fy) : x(fx), y(fy){}
  static float2 Zero(){ return float2(0, 0); }
};