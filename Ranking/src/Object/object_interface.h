
#pragma once

class cScore;
class cInterface;


class cObjectInterface {
protected:

  cScore*     m_score;
  cInterface* m_interface;

  cObjectInterface(cScore* obj);
  cObjectInterface(cInterface* obj);
};

typedef cObjectInterface objInter;