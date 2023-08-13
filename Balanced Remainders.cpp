// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;cin>>t;
  while(t>0){
    t--;
    int n; cin >> n;
    vector<int> bk(3,0);
    for(int i=0;i<n;i++){
      int x; cin>>x;
      bk[x%3]++;
    }
    int uni=n/3,res=0;
    for(int i=0;i<20;i++){
      if(bk[i%3]>uni){
        int subt=bk[i%3]-uni;
        bk[i%3]-=subt;
        bk[(i+1)%3]+=subt;
        res+=subt;
      }
    }
    cout<<res<< "\n";
  }
  return 0;
}
