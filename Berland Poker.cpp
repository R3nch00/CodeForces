// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int t,n,m,k;
int main(){
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        cout<<((m-n/k<=0) ? m : (n-m)/(k-1))<<"\n";
    }
}
