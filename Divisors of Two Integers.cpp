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
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
//void NISHI(){}
signed main(){
    int n,x,y; cin>>n;
    int a[n];
  f(n) cin>>a[i];
    sort(a,a+n);
    x=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]==a[i+1] || a[n-1]%a[i]!=0){ y=a[i]; break; }
    }
  cout<<x<<' '<<y;
 return 0;
}
