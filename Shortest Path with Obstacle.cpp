#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int T; cin>>T;
	while(T--){
		int x1,y1,x2,y2,x,y; cin>>x1>>y1>>x2>>y2>>x>>y;
		int ans=abs(x1-x2)+abs(y1-y2);
		if(x1==x2&&x1==x&&min(y1,y2)<y&&max(y1,y2)>y)ans+=2;
		if(y1==y2&&y1==y&&min(x1,x2)<x&&max(x1,x2)>x)ans+=2;
		cout<<ans<<endl;
	}
}
