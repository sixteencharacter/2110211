#include <iostream>

using namespace std;

int main() {

  pair<string,bool> p;
  cout<<p.first<<" "<<p.second<<"\n";

  pair<string,bool> p1 = {"somchai" , true};

  pair<bool,int> p2;
  p2 = make_pair(false,10);

  pair<bool,int> p3(p2);

  pair<pair<float,int>,string> p4 = {{20.5 , -3} , "abc"};
  
  cout<<p4.first.first<<" "<<p4.first.second<<" "<<p4.second<<"\n";
}
