#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,q,w,e,sum=0;
    cin>>num;
    while(num--){
        cin>>q>>w>>e;
        if(q+w+e>1)
            sum++;
    }
    cout<<sum;
}

