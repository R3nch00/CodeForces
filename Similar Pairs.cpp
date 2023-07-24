#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int a[102];
int main(){
    fast; int t; cin>>t;
    while(t--){
        int n,e=0,o=0;cin>>n; string ans="NO";
        for(int i=0;i<n;i++){
            cin>>a[i];
            (a[i]%2==0) ? e++ : o++;
        }
        sort(a,a+n);
        if(e%2==0 && o%2==0) ans="YES";
        for(int i=0;i<n-1; i++)if(a[i+1]-a[i]==1){ ans="YES";break; }
        cout<<ans<<endl;
    }
}
