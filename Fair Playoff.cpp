#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,n,m,max,MAX,x,y; cin>>m;
while(m--){
    cin>>a>>b>>c>>d;
max=a>b ? a:b; MAX=c>d ? c:d;
x=(a+b)-max; y=(c+d)-MAX;
    (y>max||x>MAX) ? cout<<("NO\n") : cout<<("YES\n"); }
}
