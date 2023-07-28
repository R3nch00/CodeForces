#include<bits/stdc++.h>
using namespace std;
long long t,n,i,s,d,a[200007],h=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;s=d=0;
        for(i=1;i<=n;++i){ cin>>a[i];s+=a[i];}
        if(s%n!=0) cout<<-1<<"\n";
        else{ for(i=1;i<=n;++i)if(a[i]>s/n)d++; cout<<d<<"\n"; }
    }
}
