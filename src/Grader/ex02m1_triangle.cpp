#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int max_(int a,int b) {
  return (a >= b)? a : b;
}

int main() {

  int n;
  cin>>n;

  vector<vector<pair<int,int>> > v;

  for(int i = 0 ; i < n ; i++) {
    vector<pair<int,int>> tmp;
    for(int j = 0 ; j <= i ; j++) {
      int t;
      cin>>t;
      tmp.push_back({t,j});
    }
    v.push_back(tmp);
  }

  //for(auto x : v) {
    //for(auto y : x) {
      //cout<<"("<<y.first<<","<<y.second<<")"<<" ";
    //}
    //cout<<"\n";
  //}

  int currMax = v[0][0].first;

  queue<pair<int,int>> q;

  q.push(v[0][0]);


  int currIterator = 0;
  int currLvl = 1;
  while(!q.empty()) {
    
    if(currLvl >= n) {
      break;
    }

    pair<int,int> currPair = q.front(); q.pop();
    //cout<<"Current Sum is "<<currPair.first<<"\n";
    q.push({currPair.first + v[currLvl][currPair.second].first,currPair.second});
    //cout<<"Try with "<<v[currLvl][currPair.second].first<<"\n";
    currMax = max_(currMax,currPair.first + v[currLvl][currPair.second].first);
    currIterator += 1;
    q.push({currPair.first + v[currLvl][currPair.second+1].first,currPair.second+1});
    //cout<<"Try with "<<v[currLvl][currPair.second+1].first<<"\n";
    currMax = max_(currMax,currPair.first + v[currLvl][currPair.second+1].first);
    //cout<<"Current Max is "<<currMax<<"\n";
    currIterator += 1;

    if(n <= 2) {
      break;
    }

    if(currIterator >= currLvl+2) {
      currIterator = 0;
      currLvl += 1;
    }
  }

  cout<<currMax;

  return 0;
}
