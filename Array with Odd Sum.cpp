#include <bits/stdc++.h>
using namespace std;
int main(){
	int z,x,n,a; cin>>z;
	while(z--){ cin>>n; a=0;
		for(int j=0;j<n;j++){ cin>>x; a+=x&1; }
		puts((a%2==1||a%n!=0) ?  "YES" : "NO");
	}
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,even,odd; cin>>t;
	while(t--){ cin>>n; even=odd=0;
		while(n--){ cin>>x;
			(x % 2 == 0) ? even++ : odd++; }
		cout <<(odd%2!=0 || odd&&even ? "YES\n" : "NO\n");
	}
}
*/
