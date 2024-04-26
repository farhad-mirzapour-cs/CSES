
#include <bits/stdc++.h>

void solve ();


using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}

void solve() {
    int n; cin >> n;
    multiset<int> towers;
    for (int i = 0; i < n;i++){
        int cube; cin >> cube;
        auto next = towers.upper_bound(cube);
        
        if (next==towers.end()) {
            
            towers.insert(cube);
        }
        else {
            towers.erase(next);
            towers.insert(cube);
        }

    }
    int siz = towers.size();
    cout<<siz<<'\n';
}