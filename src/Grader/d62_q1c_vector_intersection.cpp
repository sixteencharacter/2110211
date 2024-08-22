#include <iostream>
#include <set>

using namespace std;

int main() {

  int M , N ;

  cin>>M>>N;

  int c;

  set<int> s1  , s2;

  for(int i = 0 ; i < M ; i++) {
    
    cin>>c;
    
    s1.insert(c);
  }

  for(int i = 0 ; i < N ; i++) {
    
    cin>>c;

    if(s1.find(c) != s1.end()) s2.insert(c);
  }

  for(auto it = s2.begin() ; it != s2.end() ; it++) {
    cout<<*it<<" ";
  }

  return 0;

}
