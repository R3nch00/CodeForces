#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,i,x[10],y[10]; cin>>n;
        for(i=1;i<=n;i++){cin>>num; x[num%2]=i; y[num%2]++;}
        cout<<((y[0]!=1) ? x[1]:x[0]);
}

