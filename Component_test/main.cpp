
#include "commont.h"
#include "Object/object.h"


int main(){
  cObject obj;

  obj.componentInit();
  
  obj.draw();

  obj.update();

  obj.draw();
  
  //
  // TomさんのComponent_Test参照
  // 出力結果は同フォルダのPossible output参照
}