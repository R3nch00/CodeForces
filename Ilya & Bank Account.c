#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a; (a>0)? cout<<a:cout<<max(a/10,(a/100)*10+a%10);}
