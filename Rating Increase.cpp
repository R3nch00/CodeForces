// mes que un club //
#include <bits/stdc++.h>
#define f(m) for(int i=0;i<m;++i)
#define ll long long
using namespace std;
int main(){
    int t,i,a,b; string s;
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		a=0;i=1;b=0;
		cin>>s; a=s[0]-48;
		while(s[i]=='0'){ i++; a=a*10; }
		for(int j=i;j<s.size();j++) b=b*10+s[j]-48;
    (a<b) ? cout<<a<<" "<<b<<'\n' : cout<<-1<<'\n';
  }
	return 0;
}
