#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s; int sum=0; char pos = 'a';
	for(int i=0;i<s.size();++i){
		sum += min(abs(pos-s[i]),26-abs(pos-s[i]));
		pos=s[i];
	}
	cout<<sum;
}
/*
#include<iostream>
using namespace std;
int main(){
    string s; char ch='a'; int ans=0; cin>>s;
    for(int i=0;i<s.length();i++){
        ans +=min(abs(s[i]-ch),26-abs(s[i]-ch));
        ch=s[i];
    }
    cout<<ans<<endl;
    return 0;
}
*/
