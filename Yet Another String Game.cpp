// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t=0; cin>>t;
    while(t-->0){
        string s; cin>>s;
	for(int i = 0; i < s.size(); ++i){
		if(i%2 == 0){ s[i] = s[i] == 'a' ? 'b' : 'a'; }
		else{ s[i] = s[i] == 'z' ? 'y' : 'z'; }
	}
	cout<<s<<endl;
    }
}
