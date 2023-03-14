#include<bits/stdc++.h>
using namespace std;
int main(){
    string c; cin>>c;
    set<char> s(c.begin(),c.end());
        if(s.size()%2!=0) cout<<"IGNORE HIM!\n";
            else cout<<"CHAT WITH HER!";
}

