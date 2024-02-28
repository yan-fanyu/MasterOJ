#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>
#include <vector>
int main()
{
  string s1, s2;

  cin >> s1 >> s2;

  vector<string> v1, v2;

  if(s1.length() != s2.length()){
    cout << "NO";
  }

  else{

  for(int i = 0; i < s1.length(); i++){
    v1.push_back(s1.substr(i, 1));
    v2.push_back(s2.substr(i, 1));
  }

  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());


  for(int i = 0; i < s1.length(); i++){

    if(v1[i] != v2[i]){
      cout << "NO";
      break;
    }
  }

  cout << "YES";

  }










  return 0;
}