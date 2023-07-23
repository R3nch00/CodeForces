#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[12]; int n,sum=0,x=0; cin>>n;
    for(int i=0;i<12;i++){cin>>a[i];}
    sort(a,a+12);
    for(int i=11;i>=0;i--){ if(sum<n){sum=sum+a[i]; x++;} }
    if(sum>=n){ cout<<x<<endl; }
    else{ cout<<"-1"<<endl; }
        return 0;}
