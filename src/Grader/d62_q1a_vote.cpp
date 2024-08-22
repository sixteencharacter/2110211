#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool opt(int a , int b) {
  return a > b;
}

int main() {

  int N , K;

  cin>>N>>K;

  map<string,int> m;

  vector<int> v;

  for(int i = 0 ; i < N ; i++) {
    string c;
    cin>>c;
    if(m.find(c) == m.end()) {
      m[c] = 0;
    }
    m[c]++;
  }

  for(auto x : m) {
    v.push_back(x.second);
  }

  sort(v.begin(),v.end(),opt);

  if(v.size() <= K) {
    cout<<v[v.size()-1];
  }
  else {
    cout<<v[K-1];
  }


  return 0;
}
