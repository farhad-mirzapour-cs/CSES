
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
    int n; cin >> n;
    int curr = -1;
    map<int,int> m ; // value to pos
    int ans =1;
    for (int i = 0; i < n ;i++) {

        int num; cin >> num;
        m[num] = i;
        
    }
    for (int i = 1 ; i <=n;i++) {
        
        if (m[i]<curr) {
            
            ans++;
            
        }
        curr = m[i];
    }
    cout<<ans<<'\n';
    
    
}