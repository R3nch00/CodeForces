// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=1;i<n;i++)
using namespace std;
int main() {
cin.tie(0)->sync_with_stdio(0);
    for(int t=(cin>>t,t);t--;){
        int n; cin>>n; string s; cin>>s;
    if(s==string(n,'L') || s==string(n,'R')){ cout<<"-1\n"; continue; }
        cout << s.find('R') << '\n';
    }
}
