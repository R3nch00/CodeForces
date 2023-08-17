// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n; int cnt=0;
    while(n>1){
        k=2;
        while(n>=k){ n=n-k; k=k+3; }
        cnt++;
    }
    cout<<cnt<<endl;
    }
}
