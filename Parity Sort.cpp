// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		vector<int> V(N);
		for(int &x:V)
			cin>>x;
		auto U=V;
		sort(U.begin(),U.end());
		bool a=true;
		for(int i=0;i<N;i++){
			if(U[i]%2 != V[i]%2)
				a=false;
		}
		cout<<(a ? "YES" : "NO")<<'\n';
	}
}
