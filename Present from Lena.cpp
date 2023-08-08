// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b; cin>>n;
	for(int i=0;i<=2*n;i++){
		a=n-abs(i-n); b=0;
		while(b<n-a){
			cout<<"  "; b++;
		}
		b=a;
		while(b>-a){
			cout<<a-abs(b)<<" "; b--;
		}
		cout<<0<<endl;
	}
}
