#include <bits/stdc++.h>
using namespace std;
void f(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i: a) cin>>i;
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(__gcd(a[i],a[j]) > 1) ans++;
            else if(a[i]%2 != a[j]%2) ans++;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    int t; for(cin>>t;t--;)f();
}
