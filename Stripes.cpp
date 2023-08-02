#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		char flag='B';
		for(int i=0; i<8; i++){
			cin >> s;
			if(s=="RRRRRRRR") flag='R';
		}
		cout<<flag<<endl;
	}
	return 0;
}
