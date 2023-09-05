// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
int k; cin>>k; string s,a; cin>>s;
sort(s.begin(),s.end());
for(int i=0; i<s.size(); i+=k){
	if(s[i] == s[i+k-1])
		a+=s[i];
	else{
		cout<<"-1";
		exit(0);
	}
}
while(k--)
	cout<<a;
}
