#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b; cin>>n>>m>>a>>b; (b/m<a) ? cout<<min(((n/m)*b+(n%m)*a),(n/m)*b+b):cout<<a*n;}
