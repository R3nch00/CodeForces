#include<bits/stdc++.h>
using namespace std;
int s,a,b;
int main(){
  for(cin>>a;cin>>a>>b;s+=a>b,s-=a<b);
  cout<<(s>0?"Mishka":s?"Chris":"Friendship is magic!^^");
}
