#include<bits/stdc++.h>
using namespace std;
int main(){
int T,n; cin>>T;
while(T--){
cin>>n; int a,b;
for(int i=0,x;i<n;++i){ cin>>x; if(x==1)a=i; if(x==n)b=i; }
if(a>b)swap(a,b);
cout<<min(b+1,min(n-a,a+1+n-b))<<endl; }}
/*
#include<bits/stdc++.h>
using namespace std;
int t,n,a[110],i,j,k;
int main(){
    for(cin>>t;cin>>n;cout<<min(min(k,n+1-k+j), n+1-j)<<endl){
        for(i=j=k=1;i<=n;) cin>>a[i++];
        for(;--i; a[j]<a[i] ? :j=i) a[k]>a[i] ? : k=i;
        if(j>k) swap(j,k);
    }
}
*/
