#include <bits/stdc++.h>

using namespace std;
void solve();
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
    int n, m , k;
    cin >> n >> m >> k;
    vector<int> a (n);
    vector<int> b (m);
    for (int i = 0; i < n;i++) cin >> a[i];
    for (int i = 0; i < m;i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int p1 = 0;
    int p2 =0;
    int ans  = 0;
    while (p1 < n && p2 < m) {
        if (abs(b[p2] - a[p1] ) <=k ) {
            ans++;
            p1++;
            p2++;
            
        }
        else if (b[p2]-a[p1] > k) p1++;
        else p2++;
    }
    cout<<ans<<'\n';


}