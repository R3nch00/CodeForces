#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,x,y,z,o=0; cin>>num;
    for(;o<num;o++){cin>>x; z+=x; y=max(y,x);}
    cout<<y*num-z;
}

