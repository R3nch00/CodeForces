// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ar array
#define ve vector
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int n; string s; cin>>n; set<char> x,y;
    f(n){
        cin>>s;
        for(int j{};j<n;j++){
            (i == j || i+j == n-1) ? x.insert(s[j]) : y.insert(s[j]); }}
  puts((x.size() == 1 && y.size() == 1 && *x.begin() != *y.begin()) ? "YES" : "NO");
}
