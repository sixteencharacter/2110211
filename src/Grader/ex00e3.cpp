#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

  int n;
  
  cin>>n;

  set<int> image;
  set<int> pre_image;
  bool isDupe = false;

  for(int i  = 1 ; i <= n ; i++) {
    pre_image.insert(i);
    int c;
    cin>>c;
    if(image.find(c) != image.end()) {
      isDupe = true;
    }
    else {
      image.insert(c);
    }
  }

  if(pre_image.size() != image.size()) {
    cout<<"NO";
  }
  else if(isDupe) {
    cout<<"NO";
  }
  else {
    auto it1 = pre_image.begin();
    auto it2 = image.begin();
    bool isValid = true;
    while(it1 != pre_image.end() && it2 != image.end()) {
      if(*it1 != *it2) {
        isValid = false;
        break;
      }
      it1++;
      it2++;
    }
    if(isValid) {
      cout<<"YES";
    }
    else {
      cout<<"NO";
    }
  }
  

  return 0;

}
