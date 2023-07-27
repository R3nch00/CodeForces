#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,i; string s,pi="3141592653589793238462643383279";
  for(cin>>t;t--;){cin>>s;
    for(i=0;i<s.size();++i)
      if(s[i]!=pi[i]) break;
    cout<<i<<endl;
  }
}
