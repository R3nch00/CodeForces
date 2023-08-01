#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		string pa=a,pb=b;
		while(pa.length()!=pb.length()){
			if (pa.length() < pb.length()) pa += a;
			else pb += b;
		}
		if (pa== pb) cout<<pa<<endl;
		else cout<<-1<<endl;
	}
}
