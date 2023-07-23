#import<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int n,t,i,out;int *bound; cin>>n>>t;
  {
    int a[n + 1];
    for(i=1,a[0]=0;i<=n;i++){ cin>>a[i]; a[i]+=a[i-1]; }
    for(i=out=0;i<=n;i++){ bound=lower_bound(a+i+1,a+n+1,a[i]+t);
    if(bound-a>n || *bound>a[i]+t) bound-=1;
    out=max(out,int(bound-(a+i)));
    }
  }
  cout<<out;
  return 0;
}
