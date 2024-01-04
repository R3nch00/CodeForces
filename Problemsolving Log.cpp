// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b; cin>>a;
	while(a--){
		int  num=0;
		cin>>b;
		char c;
		map<int,int>m;
		for(int i=0;i<b;i++){
			cin>>c;
			m[c-'A'+1]++;
		}
		for(int i=1;i<=26;i++){
			if (m[i]>=i) num++;
		}
		cout<<num<<'\n';
	}
	return 0;
}
