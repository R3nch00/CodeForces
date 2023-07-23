#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k; cin>>t;
	while(t--){ cin>>n; int ans=-1;
		map<int,int> mp;
		while(n--){ cin>>k; mp[k]++;
			if(mp[k]>=3){ ans=k; }
		}
		cout<<ans<<endl;
	}
}
