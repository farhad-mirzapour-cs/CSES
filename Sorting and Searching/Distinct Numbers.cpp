
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
 	int n;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n;i++) {
        cin>> v[i];
    }
    sort(v.begin(),v.end());
    int ans = 1;
    for (int i = 1 ; i < v.size();i++) {
        if (v[i]!=v[i-1]) ans++;
    }
    cout<< ans<<"\n";

}