#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,w,e,r,y; cin>>y;
        do y++,q=y/1000,w=(y/100)%10,e=(y/10)%10,r=y%10;
            while(q==w||q==e||q==r||w==e||w==r||e==r); cout<<y;
}
