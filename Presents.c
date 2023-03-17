#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,Given,gift[100]; cin>>n;
        for(i=1;i<=n;i++){cin>>Given; gift[Given]=i;}
            for(i=1;i<=n;i++) cout<<gift[i]<<" ";
}
