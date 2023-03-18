#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main(){
    int n; string s; cin>>n;
    while(n--){cin>>s;
        if(m[s]){cout<<s<<m[s]<<"\n"; m[s]++;}
        else{cout<<"OK\n"; m[s]++;}}
    return 0;
}

