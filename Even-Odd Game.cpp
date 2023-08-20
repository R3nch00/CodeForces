// mes que un club //
#import <bits/stdc++.h>
using namespace std;
long long a[200000];
int main(int argc, char** argv){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,i; long long s1,s2;
	for(cin>>T;T>0;T--){
		cin>>n;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		s1=0; s2=0;
		for(i=n-1;i>-1;i--){
			if(a[i]%2==0&&(n-i)%2==1)s1+=a[i];
			if(a[i]%2==1&&(n-i)%2==0)s2+=a[i];
		}
		if(s1>s2) cout<<"Alice\n";
		if(s1==s2) cout<<"Tie\n";
		if(s1<s2) cout<<"Bob\n";
	}
	return 0;
}
