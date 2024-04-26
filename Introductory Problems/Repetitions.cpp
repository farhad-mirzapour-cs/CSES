
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
 	   string s;
       cin>> s;
       if (s.size()==0) {
        cout<< 0;
        return ;
       }

       int streak = 1;
       int ans = 1;
       for (int i = 1; i < s.size() ; i++) {
            if (s[i]==s[i-1]) 
                streak++;
            
            else streak = 1;
            ans = max(ans,streak);
       }
       cout<<ans;
}