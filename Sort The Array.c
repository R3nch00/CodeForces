#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void go(){
int n; cin>>n; int arr[n];
for(int i=0;i<n;i++) cin>>arr[i]; int l=0;
    while(l+1<n && arr[l]<arr[l+1]){ ++l; }
    int r=l+1;
    while(r<n && arr[r]<arr[r-1]){ ++r; }
    reverse(arr+l,arr+r);
    if(is_sorted(arr,arr+n)){
        cout<<"yes\n"; cout<<l+1<<" "<<r<<endl;
    }else cout<<"no\n";
}
int main(){
    int t=1;
    while(t--){ go(); }}
