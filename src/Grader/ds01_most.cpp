#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {

  int N;
  cin>>N;

  map<string,int> m;

  for(int i = 0 ; i < N ; i++) {
    string n;
    cin>>n;
    if(m.find(n) == m.end()) {
      m[n] = 0;
    }
    m[n]++;
  }

  vector<pair<int,string>> v;

  for(auto x : m) {
    v.push_back({x.second,x.first});
  }

  sort(v.begin(),v.end());

  cout<<v[v.size()-1].second<<" "<<v[v.size()-1].first;

  return 0;
}
