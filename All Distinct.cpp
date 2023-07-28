#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
	int t,n,a; cin>>t;
	while(cin>>n){
		set<int> nums;
		for(int i=0;i<n;i++){
			cin>>a; nums.insert(a);
		}
		cout<< nums.size() - (n-nums.size())%2 << endl;
	}
}
