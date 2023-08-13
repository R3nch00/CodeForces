// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISHI(){
    ios_base::sync_with_stdio(0);
           cin.tie(0);
}
int main(){
  NISHI();
  int Q; cin>>Q;
  while(Q--){
    int X,Y; cin>>X>>Y; string S; cin>>S; bool ok=false;
    for(auto l:S){
      if(l=='U') if(Y>0) --Y;
      if(l=='D') if(Y<0) ++Y;
      if(l=='R') if(X>0) --X;
      if(l=='L') if(X<0) ++X;
      ok|=(X==0 and Y==0);

    }
    cout<<( ok ? "YES" : "NO" )<<"\n";
  }
}
