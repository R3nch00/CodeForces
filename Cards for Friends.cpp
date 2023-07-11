#include<bits/stdc++.h>
using namespace std;
void solve(){
    int w,h,n; cin>>w>>h>>n;
    cout <<(((w & -w)*(h & -h)>=n) ? "YES\n" : "NO\n");
}
int main(){
int t; cin>>t;
while(t--){ solve(); }
return 0;
}
