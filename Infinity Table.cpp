// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,num; cin>>n;
    while(n--){
		x=1;
		cin>>num;
		while(x*x<num){ x++; }
		num=num-(x-1)*(x-1);
		if(num<=x){
			cout<<num<<" "<<x<<endl;
		}
		else
		cout<<x<<" "<<x-(num-x)<<endl;
	}
	return 0;
}
