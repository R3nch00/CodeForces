#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,mylf=0,bbc=0;cin>>n;
        while(n--){cin>>a>>b; if(a>b) mylf++; else bbc++;}
        cout<<(bbc!=mylf?(mylf>bbc ? "Mishka":"Chris"):"Friendship is magic!^^");
}
