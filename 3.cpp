#include <iostream>
using namespace std;
#include <cstring>
#include <vector>
#include <set>
int main()
{
  string s;
  string ans = "";
  set<string> set0;
  vector<string> ansvec;

  cin >> s;

  for(int i = 0; i < s.length(); i++){
    set0.insert(s.substr(i, 1));
  }

  const int n = set0.size();
  int ansnum[n];

  for(auto it = set0.begin(); it != set0.end(); it++){
    ansvec.push_back(*it);
  }

  for(int i = 0; i < n; i++){
    int num = 0;
    for(int j = 0; j < ansvec.size(); j++){
      if(ansvec[i] == s.substr(j, 1)){
        num++;
      }
    }
    ansnum[i] = num;
  }

  for(int i = 0; i < n; i++){
    ans = ans + ansvec[i] + to_string(ansnum[i]);
  }

  if(ans.length() < s.length()){
      cout << ans;
  }
  else{cout << "NO";}
  

  return 0;
}