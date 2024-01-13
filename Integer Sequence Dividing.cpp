// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    long n; cin>>n; n%=4;
    puts((n==0 || n==3) ? "0" : "1");
  return 0;
}
