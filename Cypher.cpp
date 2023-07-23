#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,n,num; string s;
  for(cin>>t;t--;cout<<endl){
    cin>>n; int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    for(int i=0;i<n;++i){ cin>>num>>s;
      for(char c : s)
        A[i]=(c=='D' ? (A[i]+1)%10 : (A[i]+9)%10);
    }
    for(int i=0;i<n;++i) cout<<A[i]<<" ";
  }
}
