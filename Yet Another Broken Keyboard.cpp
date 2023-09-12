// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,k,x[26]={0},j=0,sum=0; char c; string s;
	cin>>n>>k>>s;
	while(k--){
		cin>>c; x[c-'a']++;
	}
	for(ll i=0;i<n;i++){
		if(!x[s[i]-'a']){
			sum+=((i-j)*(i-j+1))/2;
			j=i+1;
		}
	}
	sum+=((n-j)*(n-j+1))/2;
	cout<<sum;
	return 0;
}
