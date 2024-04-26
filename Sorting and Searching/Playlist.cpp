
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
    vector<long long >a(n);
    for (int i = 0; i < n;i++) cin >> a[i];

    set<int> currWindow;
    int ans = 0;
    int l = 0;
    for (int r = 0; r < n;r++) {
        while (currWindow.count(a[r])) {
            currWindow.erase(a[l]);
            l++;
        }
        currWindow.insert(a[r]);
        int size = currWindow.size();
        ans = max(ans,size);
    }
    cout<<ans<<'\n';
    
}