// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int n,m; string S;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){cin>>S;
		for (int j=0;j<m;j++)
			if (S[j] == '.'){
				if((i+j)&1)	S[j]='W';
				else S[j] = 'B';
			}
		cout<<S<<endl;
	}
}
