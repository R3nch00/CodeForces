// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    int t; cin>>t;
	while (t--){
		string s; cin>>s;
		cout<<(s.find("1") > s.find("3") ? 31 : 13)<<endl;
	}
}
