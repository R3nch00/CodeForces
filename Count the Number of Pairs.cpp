// mes que un club //
#include <bits/stdc++.h>
const int N=2e5+10; char a[N];
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,sum=0,ans=0,b[256]={0}; cin>>n>>k>>a;
        f(n) b[a[i]]++;
        for(int i=97;i<123;i++){
            sum+=min(b[i],b[i-32]);
			ans+=abs(b[i]-b[i-32])/2;
        }
        sum+=min(ans,k);
        cout<<sum<<'\n';
    }
}
