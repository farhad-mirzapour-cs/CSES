
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
    int n; cin>>n;
    map<int,int> m;
    while (n--) {
        int a; int b;
        cin >> a >> b;
        m[a] = 1;
        m[b] = -1;
    }
    int customers = 0;
    int ans = 0;
    for (auto curr :m) {
        if (curr.second ==1) customers++;
        else customers--;
        ans = max(ans,customers);
    }
    cout<< ans<<'\n';
    
}