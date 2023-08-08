// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		set<char>q;
		ll int sum=1;
		for(int i=0;i<s.size();i++){
			q.insert(s[i]);
			if(q.size()==4){
				q.clear();
				q.insert(s[i]);
				sum++;
			}
		}
		cout<<sum<<endl;
	}
}
