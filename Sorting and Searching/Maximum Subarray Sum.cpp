
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
    vector<long long > a (n);
    for (int i = 0; i < n ;i++) cin >> a[i];
    long long maxsum = LLONG_MIN;
    long long curr = 0;
    for (int i = 0; i < n;i++){
        if (curr < 0) curr = 0;
        curr+=a[i];
        maxsum = max(maxsum,curr);
    }
    cout<<maxsum<<'\n';

}