// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int b[200000];
vector<int>v;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,i;
	for(cin>>T;T>0;T--){ cin>>n;
		f(n) cin>>b[i];
        f(n){ if(i!=0&&b[i-1]!=1) v.push_back(1); v.push_back(b[i]); }
		cout<<v.size()<<'\n';
		for(i=0;i<v.size();i++) cout<<v[i]<<' '<<'\n';
		v.clear();
	}
	return 0;
}
