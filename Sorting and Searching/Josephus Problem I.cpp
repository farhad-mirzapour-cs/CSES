
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
    set<int> s;
    for (int i = 1; i <= n;i++) s.insert(i);
    vector<int> ans;
    auto it = s.begin();
    it++;
    while (s.size()) {
        auto next = it;
        next++;
        ans.push_back(*it);
        s.erase(it);
        it = next;
        if (next==s.end()) next = s.begin();
        next++;
        if (next==s.end()) next = s.begin();

    }
    for (int i : ans) cout<< i<< " ";
    
}