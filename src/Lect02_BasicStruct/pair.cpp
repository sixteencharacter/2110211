#include <iostream>

using namespace std ;

int main() {

  pair<int,float> x;
  pair<int,float> y;

  x.first = 10;
  x.second = 20.65;

  cout<<x.first<<" ";
  cout<<x.second<<endl;

  y = x;

  cout<<y.first<<" ";
  cout<<y.second + 20<<endl;

  return 0;

}
