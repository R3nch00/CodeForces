#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,x;
  for(cin>>t;t--;) cin>>n>>x,
    cout<< max(1,(n-2+x-1)/x+1) <<endl;}
