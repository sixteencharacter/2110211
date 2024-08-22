#include <iostream>

using namespace std;

int main() {

  int hh , mm , timedelta ;

  cin>>hh>>mm;
  cin>>timedelta;
  
  int m_delta , h_delta ; 

  m_delta = timedelta % 60;
  h_delta = (timedelta - m_delta ) / 60;
  
  hh += h_delta;
  mm += m_delta;
  if(mm >= 60) {
    int temp = mm;
    mm = mm%60;
    hh += (temp - mm) / 60;
  }
  hh %= 24;
  
  if(hh < 10) {
    cout<<"0"<<hh<<" ";
  }
  else {
    cout<<hh<<" ";
  }

  if(mm < 10) {
    cout<<"0"<<mm;
  }
  else {
    cout<<mm;
  }

  return 0;
}
