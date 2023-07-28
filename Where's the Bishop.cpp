#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b; char arr[101][101]; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=8;j++){
			for(int k=1;k<=8;k++){
				cin>>arr[j][k];
				if(arr[j][k]=='#'&&arr[j-1][k-1]=='#'&&arr[j-1][k+1]=='#'){
					a=j;b=k;
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}
}
