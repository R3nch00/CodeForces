#include <iostream>
using namespace std;
int main(){
int t; cin>>t;
    while(t--){ int n,a,b,s=0; cin>>n;
        for(int i=0;i<n;i++){ cin>>a>>b; if(a%2==1)s++; if(b%2==1)s++; }
puts( s==n ? "Yes":"No"); }}
