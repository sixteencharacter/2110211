#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

float sum(vector<float> &a) {
  float sum_ = 0;
  for(auto it = a.begin() ; it != a.end() ; it++ ){
    sum_ += *it;
  }
  return sum_;
}

int main() {

  cout << std::fixed << std::setprecision(2);

  int N;
  cin>>N;

  map<string,vector<float>> subjscore;
  map<string,vector<float>> ajscore;

  for(int i = 0 ; i < N ; i++) {
    string subj , aj;
    int score;
    cin>>subj>>aj>>score;
    subjscore[subj].push_back(score);
    ajscore[aj].push_back(score);
  }

  for(auto x: subjscore) cout<<x.first<<" "<<sum(x.second)/x.second.size()<<"\n";

  for(auto x : ajscore) cout<<x.first<<" "<<sum(x.second)/x.second.size()<<"\n";

  return 0;
}
