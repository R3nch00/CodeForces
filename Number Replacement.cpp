// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){ int n; cin>>n;
        vector<int> a(n);
    for(int i=0;i<n;i++){ cin>>a[i]; }
    string s; cin>>s;
    bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]!=s[j] && a[i]==a[j]) { flag=false; continue; }
        }
    }
cout<<(flag ? "YES" : "NO")<<endl;
    }
 }
