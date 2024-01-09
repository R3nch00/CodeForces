// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    string s; cin>>s;
    for(int i=0;i<10000;i+=8){
        string t=to_string(i); int z=0;
    for(int j=0;j<s.size()&&z<t.size();++j){ if(s[j]==t[z]) z++; }
        if(z==t.size()){ return cout<<"YES"<<'\n'<<t<<'\n',0; }
    }
    cout<<"NO"<<'\n';
}
