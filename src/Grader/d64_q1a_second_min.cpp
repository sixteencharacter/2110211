#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

int get_second_min(stack<int> &s) {
  
  stack<int> temp ;

  int first_min , second_min ;
  bool FoundFirst = false , FoundSecond = false;


  while(!s.empty()) {
    int data = s.top();
    temp.push(data);
    s.pop();
    if(!FoundFirst) {
      first_min = data;
      FoundFirst = true;
    }
    else {
      first_min = (data <= first_min)? data : first_min;
    }
  }

  while(!temp.empty()) {
    int data = temp.top();
    s.push(temp.top());
    temp.pop();
    if(data != first_min) {
      if(!FoundSecond) {
        second_min = data;
        FoundSecond = true;
      }
      else {
        second_min = (data <= second_min)? data : second_min;
      }
    }
  }

  return second_min;
}

int main()
{
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n;
 cin >> n;
 vector<int> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 //repeat n-1 times
 for (int last = 1;last < n;last+=1) {
 stack<int> s;
 //build s;
 bool distinct = false;
 for (int i = last;i >= 0;i--) {
 s.push(v[i]);
 if (v[i] != v[0]) distinct = true;
 }
 cout << "--use v[" << last << "] to v[0] --" << "\n";
 if (distinct) {
 //call get_second_min if we have at least 2 distinct value
 int answer = get_second_min(s);
 //print result and s
 cout << "result is " << answer << "\n";
 cout << "size of s is " << s.size() << "\n" << "member of s are ";
 while(s.size() > 0) {
 cout << s.top() << " ";
 s.pop();
 }
 cout << "\n";
 } else {
 cout << "skip because s has only one value\n\n\n";
 }
 }
 return 0;
}
