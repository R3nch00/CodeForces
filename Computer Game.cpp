// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    string s,t; int k, n; cin >> k;
    while (k--) cin>>n>>s>>t,
        cout<< ((bitset<100>(s) & bitset<100>(t)).count() ? "NO\n" : "YES\n");
}
