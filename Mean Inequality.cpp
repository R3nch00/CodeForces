// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t,n; cin>>t;
    while(t--){
        cin>>n;
        int a[2*n+1];
        for(int i=1;i<=2*n;i++) cin>>a[i];
        sort(a+1,a+2*n+1);
        for(int i=1;i<=n;i++) cout<<a[i]<<" "<<a[i+n]<<" ";  cout<<endl;
        }
    return 0;
}
