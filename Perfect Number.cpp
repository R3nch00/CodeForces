// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int sum(int a){
	int sum=0;
	while(a>0){
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int main(){
	int a =10,k; cin>>k;
	while (k--){
		a+=9;
		if(sum(a) != 10)
			k++;
	}
	cout<<a;
}
