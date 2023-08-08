// mes que un club //
#import <bits/stdc++.h>
using namespace std;
bool solve() {
    string s; cin>>s;
    int l=s.find('a'),r=l;
    if(l==string::npos) return 0;
    for(int i = 1; i < s.length(); i++){
        int pos=s.find(char('a'+i));
        if (pos==string::npos || (pos != l - 1 && pos != r + 1))
            return 0;
        l = min(l, pos);
        r = max(r, pos);
    }
    return 1;
}
int main() {
    int t; cin>>t;
    while(t--)
        cout << (solve() ? "YES" : "NO") << endl;
}
