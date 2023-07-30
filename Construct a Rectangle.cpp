#include <bits/stdc++.h>
using namespace std;
int main(){
int t,a,b,c; cin>>t;
while(t--){ cin>>a>>b>>c;
if(a==b+c||b==a+c||c==a+b||(a==b&&!(c&1))||(a==c&&!(b&1))||(b==c&&!(a&1))) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
