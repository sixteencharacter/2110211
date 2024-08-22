#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC Optimize("O2")
#define LOWER -1000000001
#define UPPER -1000000001

using namespace std;

int main() {

  std::ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n , m , k;

  cin>>n>>m>>k;

  vector<int> a(n,0);

  for(int i = 0 ; i < n ; i++) {
    cin>>a[i];
  }

  sort(a.begin(),a.end());

  for(int i = 0 ; i < m ; i++) {
    int c;
    cin>>c;
    
    auto it = lower_bound(a.begin(),a.end(),c-k);
    auto it2 = upper_bound(a.begin(),a.end(),c+k);

    cout<<it2-it<<" ";

  }

  return 0;
}

