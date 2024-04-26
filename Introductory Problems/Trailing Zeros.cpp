
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
 	   long long n;
       cin >> n;
       long long ans = 0;
       long long denom = 5;
       while (n/denom) {
        ans+=n/denom;
        denom*=5;
       }
       cout<<ans;
}