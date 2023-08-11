// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int i,k,m=1001,n,x,a[101];
int main(){
    for(cin>>n;i<n;) cin>>a[i++];
        for (;i--;) ((k = abs(a[(i+1)%n]-a[i]))<m) ? m=k,x=i+1 : 0 ;
cout<<x<<" "<<(x%n)+1<<"\n";
}
