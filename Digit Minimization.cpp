// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int T; cin>>T;
    while(T--){
        string s; cin>>s;
    cout<<(s.size()==2 ? s[1] : *min_element(s.begin(),s.end()))<<endl;
    }
}
