// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=1;i<n;++i)
using namespace std;
class LoveTriangles {
private:
    vector<int> likes;
public:
    LoveTriangles(int n) : likes(n + 1) {}
    void readPreferences(){
        f(likes.size()){ cin >> likes[i]; }}
    bool hasLoveTriangle() {
        f(likes.size()) {
            int j = likes[i],k = likes[j];
            if(likes[k]==i){ return true; }
        }
        return false;
    }
};
int main(){
    int n; cin>>n;
    LoveTriangles loveTriangles(n);
    loveTriangles.readPreferences();
    cout<<(loveTriangles.hasLoveTriangle() ? "YES":"NO")<<'\n';
    return 0;
}
