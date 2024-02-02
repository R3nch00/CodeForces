// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int a[60]; set<int>st;
signed main(){
    io;
    int t,n; cin>>t;
    while(t--){
        cin>>n;
    f(n) cin>>a[i];
    f(n)
        for(int j=0;j<n;++j)
            st.insert(abs(a[i]-a[j]));
            cout<<st.size()-1<<'\n';
            st.clear(); }
  return 0;
}
