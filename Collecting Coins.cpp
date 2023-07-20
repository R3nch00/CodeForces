#include <bits/stdc++.h>
using namespace std;
int T;
main(){ cin>>T;
	for(;T--;){ int A,B,C,N; cin>>A>>B>>C>>N; int S=A+B+C+N;
		puts( S%3!=0 || A>S/3 || B>S/3 || C>S/3 ? "NO" : "YES" );}}
