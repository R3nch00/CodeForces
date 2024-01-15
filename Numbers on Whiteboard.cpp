// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define f(k) for(int i{};i<=k;i++)
using namespace std;
void NISHI(){
    int n; cin>>n; cout<<"2\n"<<n<<" "<<n-1<<'\n';
    for(int i=n;i>=3;i--){ cout<<i<<" "<<i-2<<'\n'; }
}
int main(){
    int t; cin>>t;
    while(t--){
        NISHI();
      if(t) cout<<'\n';
    }
  return 0;
}
