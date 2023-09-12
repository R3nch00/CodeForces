// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        puts((((a+b+c)%9 == 0) && (a+b+c)/9 <= min({a,b,c})) ? "Yes" : "No");
    }
}
