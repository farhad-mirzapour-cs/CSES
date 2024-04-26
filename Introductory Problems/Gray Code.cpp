
#include <bits/stdc++.h>
void solve ();


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
 	   int n;
       cin >> n;
       vector<string> codes{"0", "1"};
       n--;
       while (n--) {
        
        vector<string> next;
        for (int i =0 ; i < codes.size();i++) {
            next.push_back("0"+codes[i]);
        }
        for (int i =codes.size()-1 ; i >=0;i--) {
            next.push_back("1"+codes[i]);
        }
        codes=next;
       }
       for (int i = 0; i <codes.size();i++) cout<<codes[i]<<"\n";
       
}