#include <bits/stdc++.h>
using namespace std;
int main(){
long long t,n,k; cin>>t;
while(t--){cin>>n>>k;
puts(((n&1)==(k&1))&&(n>=k*k)?"YES":"NO"); }
}
