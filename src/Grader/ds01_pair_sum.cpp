#include <iostream>
#include <map>
#pragma GCC Optimize("O2")

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int N , M;

  cin>>N>>M;

  int a[N];

  map<int,int> counter;

  for(int i = 0 ; i < N ; i++) {
    cin>>a[i];
    if(counter.find(a[i]) == counter.end()) {
      counter[a[i]] = 0;
    }
    counter[a[i]]++;
  }

  for(int x = 0 ; x < M ; x++) {
    int c;
    cin>>c;

    bool found = false;
    
    for(int i = 0 ; i < N ; i++) {
      if(a[i] > c) continue;
      counter[a[i]]--;
      map<int,int>::iterator it = counter.find(c-a[i]);
      if(it != counter.end()) {
        if(it->second > 0) {
          cout<<"YES\n";
          found = true;
          counter[a[i]]++;
          break;
        }
      }
      counter[a[i]]++;
    }
    if(!found) {
      cout<<"NO\n";
    }

  }

  return 0;

}
