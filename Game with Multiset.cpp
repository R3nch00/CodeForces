// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int n,cnt[35],x,op;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>n;
	while(n--){
		cin>>op>>x;
		if(op==1)
			cnt[x]++;
		else{
			for(int i=29;i>=0;i--)
				x-=min(x>>i,cnt[i])<<i;
			puts(x ? "NO" : "YES");
		}
	}
	return 0;
}
