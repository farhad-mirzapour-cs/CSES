
#include <bits/stdc++.h>

using namespace std;
void solve ();
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
 	   int a,b;
       cin>>a>>b;
       if (a>2*b || b > 2*a) {
        cout<<"NO"<<endl;
        return;
       }
       int diff = max(a,b) -min(a,b);
       if ((min(a,b)-diff) % 3 ==0) {
        cout<<"YES"<<endl;
        return;

       }
       cout<<"NO"<<endl;
}