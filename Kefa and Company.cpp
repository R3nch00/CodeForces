// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n,d; cin>>n>>d;
    vector<pair<int,int>> a(n);
        for(auto&[x,y] : a){ cin>>x>>y; }
    sort(a.begin(),a.end());
    ll ans=0,t=0;
        for(int i=0,j=0;i<n;++i){
            while(j<n && a[j].first-a[i].first<d){ t += a[j].second; ++j; }
        ans=max(ans,t);
        t -= a[i].second;
    }
  cout<<ans<<'\n';
}
