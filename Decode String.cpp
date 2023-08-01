#include <bits/stdc++.h>
using namespace std;
int main(){
  long long q,n;
  for(cin>>q;q--;){
    string t,s=""; cin>>n>>t;
    for(int i=0;i<n;++i)
      if(i<n-2 and t[i+2]=='0' and (i>n-4 or t[i+3]!='0'))
        s.push_back(10*(t[i]-'0')+t[i+1]-'1'+'a'), i+=2;
      else
        s.push_back(t[i]-'1'+'a');
    cout<<s<<endl;
  }
}
