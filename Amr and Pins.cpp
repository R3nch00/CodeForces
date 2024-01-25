// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    int r,x,y,a,b; cin>>r>>x>>y>>a>>b;
    cout<< ceil(hypot(x-a,y-b)/(2*r)) <<endl;
  return 0;
}
