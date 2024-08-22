#include <iostream>

using namespace std;

bool isIntersect(int r1 , int c1 , int M , int N);
bool isValid(int r1 , int c1 , int r2 , int c2 , int M , int N);

int main() {

  int M,N ;
  
  cin>>M>>N;

  int R;

  cin>>R;

  int a[M][N];

  for(int i = 0 ; i < M ; i++) {
    for(int j = 0 ; j < N ; j++) {
      scanf("%d",&a[i][j]);
    }
  }

  for(int r = 0 ; r < R ; r++) {

    int r1 , c1 , r2 , c2;

    cin>>r1>>c1>>r2>>c2;
    

    bool valid  = isValid(r1,c1,r2,c2,M,N), intersected = isIntersect(r1,c1,M,N);

    if(valid && intersected) {
      int rr = min(M,r2) , cr = min(N,c2);
      int max_ = -99999;
      for(int i = r1-1 ; i < rr ; i++) {
        for(int j = c1-1 ; j < cr ; j++) {
          max_ = max(max_,a[i][j]);
        }
      }
      cout<<max_<<"\n";
    }
    else if(valid && !intersected) {
      cout<<"OUTSIDE\n";
    }
    else {
      cout<<"INVALID\n";
    }

  }

  return 0;
}

bool isIntersect(int r1 , int c1 , int M , int N) {
  
  if((0 <= c1 && c1 <= N) && (0 <= r1 && r1 <= M)) {
    return true;
  }

  return false;

}

bool isValid(int r1 , int c1 , int r2 , int c2 , int M , int N) {

  if(r2 < r1 || c1 > c2) {
    return false;
  }

  return true;

}


