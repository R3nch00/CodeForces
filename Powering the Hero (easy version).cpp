// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define ll long long
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define lb lower_bound
#define ub upper_bound
#define f(n) for(ll i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    ll n; cin>>n;
    priority_queue<ll> pq;
    ll x,ans{};
  f(n){
    cin>>x;
     if(x==0){
        if(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
     }else{ pq.push(x); }
  }
 cout<<ans<<'\n';
}
signed main(){
    int t=1;
    cin>>t;
    while(t--){ NISHI(); }
  return 0;
}
