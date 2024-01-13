// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,q,k,m,check; cin>>n>>q; int arr[n];
    f(n) cin>>arr[i]; sort(arr,arr+n);
    while(q--){ cin>>check;
        m=upper_bound(arr,arr+n,check)-arr;
        cout<<m<<' ';
    }
}
