#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,ans,a[100],b[100];
int main(){
cin>>n;for(i=0;i<n;i++){cin>>a[i];}sort(a,a+n);
cin>>m;for(i=0;i<m;i++){cin>>b[i];}sort(b,b+m);i=0;
while(i<n && j<m){if(abs(a[i]-b[j])<=1){ans++;i++;j++;}else if(a[i]>b[j]){j++;}else{i++;}}
cout<<ans;
}
