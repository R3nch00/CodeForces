// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        f(n){ cin>>a[i]; }
    int l=0,r=n-1,alice=0,bob=0,moves=0,A,B=0;
    while(l<=r){
        A=0;
        while(A<=B && l<=r){ A+=a[l]; ++l; }
        B=0; alice+=A; ++moves;
    if(l>r){ break; }
    while(B<=A && l<=r){ B+=a[r]; --r; }
    bob+=B; ++moves;
    }
    cout<<moves<<" "<<alice<<" "<<bob<<"\n";
  }
}
