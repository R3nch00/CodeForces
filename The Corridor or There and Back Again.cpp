// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int t,n,s[1005],d[1005],k;
int main(){
    cin>>t;
    while(t--){
        cin>>n; k=1e9;
        f(n){ cin>>d[i]>>s[i];
            k=min(k,d[i]+(s[i]-1)/2);
        }
        cout<<k<<endl;
    }
}
