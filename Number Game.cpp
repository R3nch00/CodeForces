// mes que un club //
#include <bits/stdc++.h>
#define f(m) for(int i=0;i<2;i++)
#define f(n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
int NISHI(int p){
    for(int i=2;i*i<=p;i++)
        if(p%i==0) return 0; return p!=1; }
int main(){
    int t,n; cin>>t;
    while(t--){
        cin>>n,puts((((n&(-n))==n&&n!=2)||(n%2==0&&NISHI(n/2))) ? "FastestFinger" : "Ashishgup");
    }
}
