#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int ans{INT_MAX},cnt[3]{},j{};
        for(int i{};i<s.size();++i){ ++cnt[s[i]-'1'];
            while(cnt[0] and cnt[1] and cnt[2]) {
                ans=min(ans,i+1-j);
                --cnt[s[j++]-'1'];
            }
        }
        cout<<(ans==INT_MAX ? 0 : ans)<<'\n';
    }
}
