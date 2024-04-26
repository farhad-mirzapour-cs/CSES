
#include <bits/stdc++.h>

using namespace std;
void solve();
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}

void solve() {
 	   long long x, y;
       cin >> x >> y;
       long long square = max(x,y);
       if (square%2) {
            long long m = square*square;
            cout<< m - ( (x-1) + (square-y)) << '\n' ;


       }
       else {
            long long m = square*square;
            cout<< m - ( (square- x) + (y-1)) << '\n';
       }
}