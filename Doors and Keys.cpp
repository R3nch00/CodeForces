// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
while(t--){
    string s; cin>>s;
    puts((s.find('r') < s.find('R') && s.find('g') < s.find('G') && s.find('b') < s.find('B')) ? "YES" : "NO");
    }
}
