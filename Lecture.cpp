#include<bits/stdc++.h>
using namespace std;
int n,m; map<string,string> BD; string a,b;
main(){
cin>>n>>m;
    for(int i=1;i<=m;i++)cin>>a>>b,BD[a]=a.size()<=b.size()?a:b;
    while(n--)cin>>a,cout<<BD[a]<<" ";
}
