// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; int i=0; char d; string num; cin>>n>>d>>num;
		while(i<n && num[i]>=d) i++;
		num.insert(i,1,d);
		cout<<num<<endl;
	}
}
