#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,m; cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){cout<<((i%2==0)||(i%4==1 && j==m-1)||(j==0 && i%4==3) ? "#":".");}
                cout<<"\n";}
        return 0;
}

