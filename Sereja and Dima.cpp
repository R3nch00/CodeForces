#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x[2]={},f=1; cin>>n; int card[n],i(0),j(n-1);
for(i=0;i<n; i++) cin>>card[i]; i=0;
while(n--)
    x[f=1-f]+=card[card[i]>card[j] ? i++ : j--];
cout<<x[0]<<" "<<x[1];
return 0;}
