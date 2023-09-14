// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int a; cin>>a; int arr[a];
	for(int c=0;c<a;c++){ cin>>arr[c]; }
	int x=arr[0]; cout<<x<<" ";
	for(int c=1;c<a;c++){
	    cout<<x+arr[c]<<" ";
	    x=max(x,x+arr[c]);
	}
	cout<<endl;
}
