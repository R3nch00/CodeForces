#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,A=0,D=0; cin>>n; char s;
        for(int i=1;i<=n;i++){cin>>s; ((s=='D') ? D++:A++);}
                if(D==A) cout<<"Friendship"; else if(D>A) cout<<"Danik"; else cout<<"Anton";
}


