#import<bits/stdc++.h>
using namespace std;
int main(){
  int t,a,b,c,x,y;
  for(cin>>t;t--;)
    cin>>a>>b>>c>>x>>y,
    cout << (max(0,x-a)+max(0,y-b) <= c ? "YES" : "NO") << endl;
}
