
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
 	   long long n , temp ;
       long long s = 0;
       cin >> n;
       long long ans = 1LL * n*(n+1)/2;
       n--;
       while (n--) {
        cin>>temp;
        s+=temp;
       }
       
       cout<< ans-s;
}