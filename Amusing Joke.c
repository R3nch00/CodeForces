#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c; cin>>a>>b>>c; b+=a;
        sort(c.begin(),c.end()),sort(b.begin(),b.end());
            cout<<((c==b) ? "YES":"NO");
}
