
#include <bits/stdc++.h>
void solve();
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
 	long long n, num;
    vector<int> v;
    cin >> n;
    while (n--) {
        cin>> num;
        v.push_back(num);
    }
    long long ans =0 ;
    for (int i = 1; i < (int ) v.size();i++)  {
     
        if (v[i]<v[i-1]) {
            ans += (v[i-1]-v[i]);
            v[i] = v[i-1];
        }
    }
    cout<< ans;
}