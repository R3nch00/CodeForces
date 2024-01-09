// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int n,k; cin>>n>>k; map<int,int> mp;
    f(n){ int in; cin>>in; mp[in]=i+1; }
    if(mp.size()>=k){
        cout<<"YES\n";
        for(auto i:mp){
            if(k==0) break;
            cout<<i.second<<" ";
            k--;
        }
    }
    else cout<<"NO\n";
}
