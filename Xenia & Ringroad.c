#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,x,s=1,sum=0;cin>>n>>m;
    while(m--){
        cin>>x; sum+=(x-s+n)%n; s=x;}
    cout<<sum<<endl;
}

