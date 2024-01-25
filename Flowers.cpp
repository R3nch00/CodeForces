// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(t) for(int i{};i<t;i++)
using namespace std;
int dp[200001];
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t, k; cin>>t>>k; dp[0] = 1;
    for(int i=1;i<=2e5;i++){
        dp[i]=dp[i-1];
        if(i >= k) dp[i]=(dp[i]+dp[i-k] )% mod; }
    for(int i=1;i<=2e5;i++) dp[i]=(dp[i] + dp[i-1]) % mod;
    f(t){ int a, b; cin>>a>>b;
        cout<< (dp[b]-dp[a-1]+mod) % mod<<'\n';}
}
