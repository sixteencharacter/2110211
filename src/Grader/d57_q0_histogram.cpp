#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {

  int N;

  cin>>N;

  map<string,int> m;

  for(int i = 0 ; i < N ; i++) {
    string s;
    cin>>s;
    if(m.find(s) == m.end()) {
      m[s] = 0;
    }
    m[s]++;
  }

  vector<pair<string,int>> v;

  for(auto it = m.begin() ; it != m.end() ; it++) {
    v.push_back({it->first,it->second});
  }

  sort(v.begin(),v.end());

  for(auto x : v) {
    if(x.second > 1) {
      cout<<x.first<<" "<<x.second<<"\n";
    }
  }

  return 0;
}
