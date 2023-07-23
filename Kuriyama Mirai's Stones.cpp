#include<bits/stdc++.h>
using namespace std;
int main(){
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int m,n,i,r,l,q,v;
cin>>n;
long long s1[n+1],s2[n+1];
for(i=1;i<=n;i++){
    cin>>v;
    s1[i]=s2[i]=v;
}
s1[0]=0;s2[0]=0;
for(i=1;i<=n;i++){s1[i]+=s1[i-1];}
sort(s2,s2+(n+1));
for(i=1;i<=n;i++){s2[i]+=s2[i-1];}
cin>>m;
for(i=0;i<m;i++){
    cin>>q>>l>>r;
if(q==1)cout<<s1[r]-s1[l-1]<<'\n';
else cout<<s2[r]-s2[l-1]<<'\n';
}
}
