// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  int t,n,num,i,f,q;
  for(cin>>t; cin>>n; ){
    for(f=0,i=0;i<n;++i)
      cin>>num, q=sqrt(num), f |= (q*q != num);
    cout<< (f ? "YES" : "NO") <<endl;
  }
}
