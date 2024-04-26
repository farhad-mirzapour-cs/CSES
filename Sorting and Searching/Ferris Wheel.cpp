
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
    int n, x;
    cin >> n >> x;
    vector<int> p (n);
   
    for (int i = 0; i < n;i++) cin >> p[i];
    sort(p.begin(),p.end());
    int s = 0;
    int e = n-1;
    int match = 0;
    while (s <e) {
        if (p[e]+p[s] > x) {
            e--;

        }
        else {
            e--;
            s++;
            match++;
        }
    }
    cout << n - match<<'\n';
    

    


}