// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    long t; cin>>t;
    while(t--){
        long n, m; cin>>n>>m;
        puts(((n + m) % 2) ? "Burenka" : "Tonya");
    }
}
