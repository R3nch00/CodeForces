#include<bits/stdc++.h>
using namespace std;
int i,k,r;
int main(){
    cin>>k>>r;
        for(i=1;;i++)if(i*k%10==0||i*k%10==r){cout<<i<<"\n"; break;}
        return 0;
}
