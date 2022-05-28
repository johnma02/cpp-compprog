#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> whiteboard;
    for(int i = 1; i <= n; i++){
        whiteboard.pb(i);
    }
    vector<pair<int,int>> operations;
    for(int i = 0; i < n-1; i++){
        operations.pb(mp(whiteboard[1], whiteboard[whiteboard.size()-1]));
        whiteboard.erase(whiteboard.begin()+1);
        whiteboard.pop_back();
    }
    cout << whiteboard[0] << '\n';
    for(auto p : operations){
        cout << p.first << " " << p.second << '\n';
    }
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}