#include <iostream>
using namespace std;

int main() {

  int n,m,k;
  cin>>n>>m>>k;
  int a[n][m];

  for(int i = 0 ; i < n ; i++) {
    for(int j = 0 ; j < m ; j++) {
      cin>>a[i][j];
    }
  }

  int p[n+1][m+1];

  for(int i = 0 ; i <= n ; i++) {
    p[i][0] = 0;
  }
  for(int j = 0 ; j <= m ; j++) {
    p[0][j] = 0;
  }

  p[1][1] = a[0][0];

  for(int i = 2 ; i <= m ; i++) {
    p[1][i] = p[1][i-1] + a[0][i-1];
  }

  for(int i = 2 ; i <= n ; i++) {
    p[i][1] = p[i-1][1] + a[i-1][0];
    for(int j = 2 ; j <= m ; j++) {
      p[i][j] = a[i-1][j-1] + p[i-1][j] + p[i][j-1] - p[i-1][j-1];
    }
  }

  for(int i = 0 ; i < k ; i++) {
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    cout<<p[r2+1][c2+1]-p[r2+1][c1]-p[r1][c2+1]+p[r1][c1]<<"\n";
  }

  return 0;
}
