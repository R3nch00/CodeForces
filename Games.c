#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,Karim[300],Benzu[300],sum=0; cin>>n;
        for(i=0;i<n;i++) cin>>Karim[i]>>Benzu[i];
        for(i=0;i<n;i++){for(j=0;j<n;j++){if(!(Karim[i]-Benzu[j])) sum++;}}
        cout<<sum; return 0;
}
