#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,seat=0,bandor=0; cin>>n;
        while(n--){ cin>>a>>b; seat=seat-a+b; if(seat>bandor) bandor=seat;}
        cout<<bandor;
}
