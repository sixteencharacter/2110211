#include <iostream>
#include <map>


typedef long long int lli;

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int M , N;

  cin>>M>>N;

  map<lli,lli> map2dad;

  for(int i = 0 ; i < M ; i++) {
    
    lli F , S;
    
    cin>>F>>S;

    map2dad[S] = F;

  }
  
  for(int i = 0 ; i < N ; i++) {
    
    lli A , B;

    cin>>A>>B;

    // check whether A and B exist
    
    map<lli,lli>::iterator it_0 = map2dad.find(A) , it_1 = map2dad.find(B);
    
    if(it_0 == map2dad.end() || it_1 == map2dad.end() || it_0 == it_1) {
      cout<<"NO\n";
    }
    else {
      // check whether their granddad exist
      map<lli,lli>::iterator it_d0  = map2dad.find(it_0->second), it_d1 = map2dad.find(it_1->second);
    
      if(it_d0 == map2dad.end() || it_d1 == map2dad.end()) {
        cout<<"NO\n";
      }
      else {
        if(it_d0->second == it_d1->second) {
          cout<<"YES\n";
        }
        else {
          cout<<"NO\n";
        }
      }
    }
  }

  return 0;

}
