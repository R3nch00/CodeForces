#include<bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	for(int i=1;i<=t;i++){ cin>>a>>b>>c;
		(((2*b-c)>0&&(2*b-c)%a==0)||(a+c)%(b*2)==0||((2*b-a)>0&&(2*b-a)%c==0)) ? cout<<"YES\n" : cout<<"NO\n";
		}
	return 0;
}
