// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int n,d,i,x,sum=0; cin >> n >> d;
	for(i=0;i<n;i++){ cin >> x; sum+=x; }
	cout<<((sum+(n-1)*10>d) ? -1 : (d-sum)/5);
}
