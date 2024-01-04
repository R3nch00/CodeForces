// mes que un club //
#include <bits/stdc++.h>
using namespace std;
void NISHI(){
    long long n=0,a=0,s=0,m=0; cin>>n;
    for(int i=0;i<n;i++){ cin>>a; s+=a; }
    m=sqrt(s);
cout<<((m*m==s) ? "YES\n":"NO\n");
    }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t=0; cin>>t;
for(int i=0;i<t;i++)
NISHI();
}
