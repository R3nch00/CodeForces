#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;char s;set<int> e; cin>>n;
        while(cin>>s){e.insert(tolower(s));}
            cout<<((e.size()!=26) ? "NO":"YES");
}
