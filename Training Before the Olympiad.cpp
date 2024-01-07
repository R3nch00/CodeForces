// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(t) for(int i=0;i<t;i++)
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	f(t){
		int n; cin>>n;
		vector<int> a(n); long x=0,y; ll s=0;
		f(n){ cin >> y; s+=y;
			if(y%2){x++;} cout<<s-(x/3)-(x-(x/3)*3==1 && i!=0)<< ' ';
		}
		cout<<"\n";
	}
}
