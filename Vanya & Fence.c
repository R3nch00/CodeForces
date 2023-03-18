#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,a,s=0; cin>>n>>h;
    while(cin>>a) a<=h ? s++:s+=2;
    cout<<s;
}



