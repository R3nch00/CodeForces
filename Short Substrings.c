#include<bits/stdc++.h>
using namespace std;
int main(){
        int T,i; string s; cin>>T;
        while(T--&&cin>>s){cout<<s[0];
            for(i=1;s[i];i++)cout<<(s[i]==s[i+1] ? s[i++]:s[i]);cout<<'\n';}
}
