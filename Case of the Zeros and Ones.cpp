#include<bits/stdc++.h>
using namespace std;
int main() {
int n,cnt; string s; cin>>n>>s;
for(auto x:s)
cnt+=(x == '1' ? 1 : -1);
cout<<abs(cnt)<<endl;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, c=0; cin>>n; string s; cin >>s;
for(int i=0;i<n;i++)
if(s[i]=='0') c++;
cout<<n-2*min(c, n-c) ;
}
*/
