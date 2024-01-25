// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tt,i,n,k,ans; cin>>tt; int a[26]; char t;
    while(tt--){  cin>>n>>k;
    for(int i{};i<26;i++) a[i]=0;
    f(n) cin>>t,a[t-97]++;
        if(1 & (n-k)) k++;
    for(int  i{};i<26;i++) if(1 & a[i]) k--;
  puts((k>-1 && k%2 == 0) ? "Yes" : "No");
 }
}
