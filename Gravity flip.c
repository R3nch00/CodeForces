#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n; cin>>n; int cube[n];
        for(i=0;i<n;i++) cin>>cube[i]; sort(cube,cube+n);
        for(i=0;i<n;i++) cout<<cube[i]<<" "; return 0;
}

