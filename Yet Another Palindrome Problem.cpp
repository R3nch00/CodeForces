// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int g; cin>>g;
    while(g--){
        int n; cin>>n; int a[5005]={};int b=0;
    for(int i=1;i<=n;i++){
        int j; cin>>j;
if(a[j]==0) a[j]=i;
else if(a[j]!=i-1) b=1;
}
puts(b ? "YES" : "NO");}
}
