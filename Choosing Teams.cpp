#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,x,cnt=0; cin>>n>>k;
while(n--){ cin>>x;
    if(5-x>=k) cnt++;}
cout<<cnt/3;}
