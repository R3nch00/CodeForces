// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
void NISHI(){
  int n; cin>>n; vector<int>a(n);
  for(auto&i:a) cin>>i;
  int ans=0;
  for(int i=0;i<n-1;i++) if(a[i]>a[i+1]) ans=max(ans,a[i]);
  cout<<ans<<endl;
    }
int main(){
  int t; cin>>t;
  while(t--) NISHI();
}
