#include<bits/stdc++.h>
using namespace std;
int main(){
    long a,b,c=0,i=1; cin>>a>>b;
    for(i;i<a+1;i++) if(b%i==0&&b/i<=a) c++;
        cout<<c<<endl;
}
