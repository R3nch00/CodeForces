#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,a,n,sum=0; cin>>a>>n; int M=n,m=n;
        for(i=1;i<a;i++){cin>>n; if(m>n){m=n; sum++;} else if(M<n){M=n; sum++;}}
            cout<<sum<<"\n"; return 0;
}

