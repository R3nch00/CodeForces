#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x=0;string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if(s[1]=='+')
            x++;
        else
            x--;
    }
    cout<<x<<'\n';
}
