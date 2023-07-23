#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){ cin>>t;
	while(t--){ cin>>n>>k;
		if(k<n)k*=(n+k-1)/k;
		if(!(k%n))cout<<k/n<<endl;
		else cout<<k/n+1<<endl;
	}
}
