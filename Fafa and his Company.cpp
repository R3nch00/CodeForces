#include <bits/stdc++.h>
using namespace std;
int main(){
int a,n=0; cin>>a;
for(int i=1;i<a;i++) a%i==0 ? n++ : n+=0;
cout<<n;
}
