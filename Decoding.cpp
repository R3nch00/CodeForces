// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int n; string s,b=""; cin>>n>>s;
    for(int i=n-1;i>=0;i--) b.insert(b.begin()+b.size()/2,s[i]);
    cout<<b;
}
