#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
int a[N]; char s[N];
int main(){
	cin>>s;
	for(int i=0;s[i];i++)
		a[i]=a[i-1]+(s[i]==s[i-1]);
	int n; cin>>n;
	while(n--){ int l,r; cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}
}
