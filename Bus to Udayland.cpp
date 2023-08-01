#include<bits/stdc++.h>
using ll=long long;
void solve(){
	int n;std::cin>>n;
	std::vector<std::string>a(n);
	for(auto&i:a)std::cin>>i;
	bool ok=false;
	for(auto&s:a){
		if(s.substr(0,2)=="OO"){
			ok=true;
			s[0]=s[1]='+';
			break;
		}
		if(s.substr(3,2)=="OO"){
			ok=true;
			s[3]=s[4]='+';
			break;
		}
	}
	if(!ok){
		std::cout<<"NO\n";
		return;
	}
	std::cout<<"YES\n";
	for(const auto&s:a){
		std::cout<<s<<'\n';
	}
}
int main(){
	std::cin.tie(nullptr)->sync_with_stdio(false);
	solve();
	return 0;
}
