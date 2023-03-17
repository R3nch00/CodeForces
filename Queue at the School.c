#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,t; cin>>n>>t; string psg; cin>>psg;
        while(t--){for(i=0;i<psg.size();i++){if(psg[i]=='B' && psg[i+1]=='G')swap(psg[i],psg[i+1]),i++;}
    }
    cout<<psg; return 0;
}


