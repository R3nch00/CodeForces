#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    if(n==1 && m==1){ cout<<2<<endl; exit(0); }
    for(int i=0;i<=max(n,m);i++){
        for(int j=0;j<=max(n,m);j++){
            if((pow(i,2)+j==n) && (i+pow(j,2)==m)){
                cout<<1<<endl; exit(0);
            }
        }
    }
    cout<<0<<endl;
}
