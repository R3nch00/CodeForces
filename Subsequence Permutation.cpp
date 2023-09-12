// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t,n; string s,r;
  for(cin>>t;cin>>n>>s;){
    r = s;
    sort(r.begin(),r.end());
    int k=0;
    for(int i=0;i<n;++i)
      k += s[i]!=r[i];
    cout<<k<<endl;
    }
}
