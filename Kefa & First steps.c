#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;int c,MAX=0; cin>>n;int a[n];
    for(i=0;i<n;i++){cin>>a[i]; a[i]>=a[i-1] ? c++:c=1;
    if(c>MAX) MAX=c;}
    cout<<MAX<<endl;
}
