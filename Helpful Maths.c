#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    for(int i=0;i<s.length();i+=2)
        for(int j=0;j<s.length();j+=2)
            if(s[i]<s[j]) swap(s[i],s[j]);
                cout<<s;
}
