#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,k,l,m,n,o,d=0; cin>>k>>l>>m>>n>>o;
        for(i=1;i<=o;i++) if(i%k && i%l && i%m && i%n)d++;//for(i=1;i<=o;i++) if(i%k==0||i%l==0||i%m==0||i%n==0)d++;
        cout<<o-d;//cout<<d;
}
