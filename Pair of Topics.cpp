// mes que un club //
#include <bits/stdc++.h>
#define ll long long
const int maxn=2e5+10;  ll a[maxn],b[maxn];
using namespace std;
int main(){
  cin.tie(0); ios::sync_with_stdio(false);
  ll n; cin>>n;
  for(ll i=1;i<=n;i++) cin>>a[i];
  for(ll i=1;i<=n;i++){ cin>>b[i]; b[i]=a[i]-b[i]; }
  sort(b+1,b+1+n);
  ll l=1; ll r=n; ll sum=0;
  while(l<r){
      if(b[r]+b[l]>0){ sum+=r-l; r--; }
      else l++;
  }
  cout<<sum<<endl;
}
