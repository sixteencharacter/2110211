#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<pair<int,int> > s;
  for(int i  = 0 ; i < v.size() ; i++) {
    if(v[i].first == 1) {
      s.push(make_pair(1,v[i].second));
    }
    if(v[i].first == 0) {
      int a = s.top().second ; s.pop();
      int b = s.top().second ; s.pop();
      if(v[i].second == 0) {
        s.push(make_pair(1,b+a));
      }
      else if(v[i].second == 1) {
        s.push(make_pair(1,b-a));
      }
      else if(v[i].second == 2) {
        s.push(make_pair(1,b*a));
      }
      else {
        s.push(make_pair(1,b/a));
      }
    }
  }

  return s.top().second;

}

#endif
