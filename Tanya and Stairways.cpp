// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int n,x,i,s;
int a[1790];
int main(){
  for(cin>>n;i<n;i++) cin>>x,s+=x==1,a[s]=x;
  for(cout<<s<<endl,i=1;i<=s;cout<<a[i++]<<' ');
 return 0;
}
