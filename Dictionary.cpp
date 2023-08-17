// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
    while(t--){ char m,n; cin>>m>>n;
        cout<< (m-'a')*25+n-'a'+(m>n) <<endl; }
}
