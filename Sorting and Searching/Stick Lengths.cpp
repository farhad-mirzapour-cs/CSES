
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
    vector<long long> p (n);
    for (int i = 0 ; i < n ; i ++) {
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    long long ans = 0;
    for (int i : p) ans+= abs(i-p[n/2]);
    cout<<ans<<'\n';
}