
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
 	    long long n =0 ;
        cin >> n;
        while (n!=1) {
            cout<<n<<' ';
            if (n%2) n=3*n +1;
            else n /=2;
       }
       cout<<1;
}