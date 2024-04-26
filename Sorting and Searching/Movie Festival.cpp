
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
    cin>>n;
    vector<pair<int,int>> movies;
    for (int i = 0; i < n;i++){
        int a; int b;
        cin >> a >> b;
        pair<int,int> p {b,a};
        movies.push_back(p);

    }
    sort(movies.begin(),movies.end());
    long long curr = INT_MIN;
    int ans = 0;
    for (int i = 0; i < n;i++){
        pair<int,int> m = movies[i];
        if (curr <=m.second) {
            curr = m.first;
            ans++;
        }
    }
    cout<<ans<<'\n';

    
    
}