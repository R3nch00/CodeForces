#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,chor,sum=0,count=0; cin>>n;
        for(i=0;i<n;i++){cin>>chor;
            (chor>0||sum!=0) ? sum+=chor:count++;} cout<<count;}
