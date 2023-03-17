#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k,sum=0;
        cin>>n>>k;
    int Arr[n];
        for(i=0;i<n;i++)
            cin>>Arr[i];
        for(i=0;i<n;i++){
            if((Arr[i]>=Arr[k-1])&& (Arr[i]>0))
                sum++;
        }
        cout<<sum;
}
