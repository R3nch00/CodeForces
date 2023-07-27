#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ll t,n,i,b; cin>>t;
while(t--){ cin>>n; b=1; map<char,ll>m; char c,l; cin>>c; m[c]++;
for(i=1;i<n;i++){ cin>>l; if(m[l]>0&&l!=c) b=0; m[l]++; c=l; }
cout<<( b ? "YES\n" : "NO\n" );
}
}
