#include<iostream>
#include<set>

using namespace std;

int main() {

  set<int> myset;

  myset.insert(1);
  myset.insert(1);
  myset.insert(2);
  myset.insert(3);

  for(auto it = myset.begin() ; it != myset.end() ; it++) {
    cout<<*it<<" ";
  }

  cout<<endl;

  return 0;
}
