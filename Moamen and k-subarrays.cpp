// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(N) for(int i{};i<N;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
 	int t; cin>>t;
    while(t--){
 		int N,K;  cin>>N>>K;
 		vector<pair<int,int>> a(N);
      f(N){ cin>>a[i].first; a[i].second=i; }
 		sort(a.begin(),a.end());
 		int cnt=1;
      for(int i=1;i<N;i++){
 			if(a[i-1].second+1 != a[i].second){ cnt++; }}
    puts((cnt<=K) ? "Yes" : "No");
  }
	return 0;
}
