#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); int n; cin>>n; int*d=new int[n]; d[0]=0;
    for(int a,b,i=!(cin>>a);i<n-1;i++){
            cin>>b;d[i+1]=abs(a-b)+d[i];a=b;}
    for(int i=0;i<n;i++) cout<<min(i ? d[i]-d[i-1] : d[i+1],(i<n-1) ? d[i+1]-d[i] : d[i] )<<' '<<max(d[i] , d[n-1]-d[i])<<'\n';
return 0;
}
