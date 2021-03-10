#include "main.h"

using namespace std;

void CFeature::CFeature() 
  : m_data(0)
  {
  }

void CFeature::fnDisplay() 
{
  cout << __FUNCTION__ << m_data;
}


int main () {
  cout << __FILE__ << " : " << __LINE__ << " : " << __FUNCTION__ << endl;
  
  CFeature cobj(77);
  cobj.fnDisplay();
 
  return 0;
}
