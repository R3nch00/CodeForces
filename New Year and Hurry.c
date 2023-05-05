#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=0; cin>>a>>b;
    while(b<=240 && c<=a){
        c++;
        b+=5*c;
    }
    cout<<c-1;
}
