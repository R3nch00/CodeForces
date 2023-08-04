// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void solve(){
  int n,x,k=0; cin>>n;
  int w[101]={0};
  for(int i=0;i<n;i++){
    cin>>x;
    w[x]++;
  }
  for(int j=1;j<101;j++){
    int c=0;
    for(int l=0;l<=j;l++){
      c+=min(w[l],w[j-l]);
      k=max(k,c/2);
    }
  }
  cout<<k<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1; cin>>t;
    while(t--){
        solve();
    }
}
