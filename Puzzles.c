#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,m,piece[100],s=123456; cin>>n>>m;
        for(i=0;i<m;i++) cin>>piece[i]; sort(piece,piece+m);
            for(i=0;i+n-1<m;i++) s=min(s,piece[i+n-1]-piece[i]); cout<<s;
}
