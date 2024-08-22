#include "Tokenizer.h"
#include <iostream>
#include <set>


using namespace std;

void CountUniqueWord(string filename);
void CountUniqeWithManual(string filename);

int main() {

  CountUniqueWord("mobydick.txt");

}

void CountUniqueWord(string filename) {

  set<string> words;
  Tokenizer tokenizer(filename);

  while(tokenizer.hasNext()) {

    string target = tokenizer.next();
    if(words.find(target) == words.end()) {
      words.insert(target);
    }

  }

  cout<<words.size();

}
