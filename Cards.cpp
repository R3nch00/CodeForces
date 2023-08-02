#include <bits/stdc++.h>
using namespace std;
int main(){
	int num; string ss; cin>>num>>ss;
	int zero=0,one=0;
	for(int i=0;i<num;i++){
		if(ss[i]=='z') zero++;
		if(ss[i]=='n') one++;
	}
	while(one--) cout<< 1<< " ";
	while(zero--) cout<< 0<< " ";
}
