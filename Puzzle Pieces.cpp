// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  int t,n,m;
  for(cin>>t; cin>>n>>m; )
    cout<<(min(n,m)==1 || n+m==4 ? "YES" : "NO")<<endl;
}
