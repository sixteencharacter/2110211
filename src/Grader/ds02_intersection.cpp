#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int M  , N ;

  cin>>M>>N;

  vector<int> a;
  vector<int> ret;

  for(int i = 0 ; i < M ; i++) {
    int c;
    cin>>c;
    a.push_back(c);
  }

  for(int i = 0 ; i < N ; i++) {
    int c;
    cin>>c;
    if(find(a.begin(),a.end(),c) != a.end() && find(ret.begin(),ret.end(),c) == ret.end()) {
      ret.push_back(c);
    }
  }

  sort(ret.begin(),ret.end());

  for(auto x : ret) {
    cout<<x<<" ";
  }

  return 0;
}
