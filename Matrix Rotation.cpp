// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin>>t;
while(t--){
    int a,b,c,d; cin>>a>>b>>c>>d;
puts((a<b) == (c<d) && (a<c) == (b < d) ? "YES" : "NO"); }}
