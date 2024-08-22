#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool max2min(int i , int j) { return i > j ; }

int main() {

  int n;
  cin>>n;

  vector<int> payload;

  for(int i = 0 ; i < n ; i++) {

    string command;
    cin>>command;

    if(command == "pb") {
      int x;
      cin>>x;
      payload.push_back(x);

    }
    else if(command == "sa") {
      sort(payload.begin(),payload.end());
    }

    else if(command == "sd") {
      sort(payload.begin(),payload.end(),max2min);
    }
    else if(command == "r") {
      //reverse(payload.begin(),payload.end());
      for(int i = 0 ; i < ( payload.size() / 2 ) + 1 ; i++) {
        if(i >= payload.size() - i) {
          break;
        }
        int temp = payload[i];
        payload[i] = payload[payload.size()-i-1];
        payload[payload.size()-i-1] = temp;
      }
    }
    else if(command == "d") {
      int i;
      cin>>i;
      payload.erase(payload.begin()+i,payload.begin()+i+1);
    }
  }

  for(int i = 0 ; i < payload.size() ; i++) {
    if(i != payload.size()-1) {
      cout<<payload[i]<<" ";
    }
    else {
      cout<<payload[i];
    }
  }

  return 0;
}
