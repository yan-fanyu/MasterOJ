#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <cstring>

int main()
{

  string s;
  cin >> s;
  set<string> _set;

  for(int i = 0; i < s.length(); i++){
    _set.insert(s.substr(i, 1));
  }

  if(_set.size() == s.length()){
    cout << "YES";
  }
  else{
    cout << "NO";
  }

  

  return 0;
}

// #include <iostream>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// int main()
// {
//   // 请在此输入您的代码
//     string sl;
//     cin>>sl;
//     sort(sl.begin(),sl.end());
//     int l=sl.size();
//     int fl=1;
//     for(int i=0;i<l;i++)
//     {
//       if(sl[i]==sl[i+1])fl=0;
//     }
//     if(fl)cout<<"YES";
//     else cout<<"NO";
//   return 0;
// }