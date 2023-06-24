#include<bits/stdc++.h>
using namespace std;
int main() {
int n,k,min=300,j,zero=0; cin>>n>>k;
    int h[n+1];
    for(int i=0;i<k;i++){cin>>h[i];zero+=h[i];}
    min=zero; j=0;
    for(int i=k;i<n;i++){cin>>h[i];
    zero+=h[i]-h[i-k];
    if(zero<min){j=i-k+1;min=zero;}
    }
    cout<<j+1;
return 0; }
