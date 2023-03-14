#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        (s[i]=='.') ? cout<<0:(s[++i]=='.' ? cout<<1:cout<<2);
    }
}

