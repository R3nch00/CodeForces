#include<bits/stdc++.h>
using namespace std ;
int main(){
string s,t; int j=0 ; cin>>s>>t ;
for(int i=0;i<t.size();i++)
    if(s[j]==t[i]) j++ ; cout<< ++j ;
}
