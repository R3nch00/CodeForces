#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];int sum=0,n; cin>>n;
        while(n--){cin>>s; if(s[0]=='I') sum+=20; else if(s[0]=='D') sum+=12; else if(s[0]=='O') sum+=8; else if(s[0]=='C') sum+=6; else if(s[0]=='T') sum+=4;}
            cout<<sum;}


