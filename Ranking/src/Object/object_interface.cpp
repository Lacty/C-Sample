
#include "object_interface.h"
#include "Score/score.h"
#include "Interface/interface.h"


objInter::cObjectInterface(cScore* obj) :
m_score(obj) {}


objInter::cObjectInterface(cInterface* obj) :
m_interface(obj) {}