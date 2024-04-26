
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
 	  int n;
      cin>>n;
      int start = 0;
      while (++start <=n) {
        long long possible = 1LL * (start*start) * (start*start -1) /2 ;
        long long attack = 1LL * (start-1)*(start-2) * 4;
        cout<<possible-attack<<endl;

      }
      

}