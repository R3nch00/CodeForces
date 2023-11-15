// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(m) for(int i=0;i<m;i++)
using namespace std;
signed main(){
    int i;string s; cin>>s;
    ll int sum=0,c=0;
    while(s.size()!=1){
        c++; sum=0;
        for(i=0;i<s.size();i++) sum+=s[i]-48; s=to_string(sum);
    }
    cout<<c<<endl;
}
