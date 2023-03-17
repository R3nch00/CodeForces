#include<bits/stdc++.h>
using namespace std;
int main(){
    string l; cin>>l; int i,count=0;
    for(i=0;i<l.size();i++)
        if(l[i]=='4'||l[i]=='7')  count++;
    cout<<((count==7||count==4)?"YES":"NO");
}

