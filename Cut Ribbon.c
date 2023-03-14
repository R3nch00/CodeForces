#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,a,b,c,n,k,s=1; cin>>n>>a>>b>>c;
for(i=0;i<=n;i++)
    for(j=0;j<=n;j++){
    k=n-a*i-b*j;
    if(k>=0 && k%c==0) s=max(s,(i+j+k/c));
}
cout<<s;
}
