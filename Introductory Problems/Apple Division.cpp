
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
    int n; cin >> n;
    
    vector<long long> p (n,0);
    for (int i = 0; i < n ;i++) cin >> p[i];
    long long min_diff = LLONG_MAX;
    long long tot = 0;
    long long halfsum = 0;
    for (long long i : p) tot+=i;
    for (int i =0 ; i < (1<<n);i++) {
        halfsum = 0;
        for (int j = 0; j < n ;j++) {
            if ((i>>j) & 1) halfsum+=p[j];
        }
        min_diff=min(min_diff,abs(halfsum - (tot-halfsum)));

    }
    cout<<min_diff<<'\n';
    
    

    
}