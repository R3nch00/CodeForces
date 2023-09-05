// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100001],p=0; cin>>n;
	for(int i = 0; i < n; i++)
        cin>>a[i];
	sort(a,a + n);
	for(int i = 0; i < n; i++)
	if(a[i] == a[0] || a[i] == a[n - 1])
        p++; cout<<n-p;
	return 0;
}
