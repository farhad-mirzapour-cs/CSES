
#include <bits/stdc++.h>

using namespace std;
void solve ();
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
    if (n== 2 || n==3) {
        cout<<"NO SOLUTION";
        return;
    }
  
    int temp = n-1;
    while (temp > 0) {
        cout<<temp<<" ";
        temp-=2;
    }
    while (n > 0) {
        cout<<n<<" ";
        n-=2;
    }


    

}