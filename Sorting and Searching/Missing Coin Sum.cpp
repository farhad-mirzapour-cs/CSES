
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
    vector<long long> a (n);
    for (int i = 0; i < n ; i++) cin >> a[i];
    sort(a.begin(),a.end());
    long long range = 0;
    for (int i = 0; i < n;i++) {
        if (a[i]>range+1) {
            cout<<range+1 << '\n';
            return;
        }
        range+=a[i];
    }
    cout<<range+1 << '\n';
    
}