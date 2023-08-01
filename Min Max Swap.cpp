#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		int n,tmp=0;cin>>n;
		int a[n],b[n];
		for(int j=0;j<n;j++)
		cin>>a[j];
		for(int j=0;j<n;j++){
			cin>>b[j];
			if(a[j]<b[j]){
				tmp=a[j];
				a[j]=b[j];
				b[j]=tmp;
			}
		}
		sort(a,a+n);
		sort(b,b+n);
		cout<<a[n-1]*b[n-1]<<endl;
	}
}
