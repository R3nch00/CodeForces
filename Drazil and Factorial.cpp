// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int n; cin>>n;
    string a; cin>>a; string b = "";
    string ch[10]={"","","2","3","223","5","53","7","7222","7332"};
    f(n){ b += ch[a[i]-'0']; }
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    cout<<b<<endl;
    return 0;
}
