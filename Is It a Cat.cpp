// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t,n; string s; cin>>t;
    while(t--){
        cin>>n>>s;
        for(auto& ss : s) ss=tolower(ss);
        s.erase(unique(s.begin(), s.end()) , s.end());
        cout<<((s=="meow") ? "YES" : "NO")<<endl;
    }
    return 0;
}
