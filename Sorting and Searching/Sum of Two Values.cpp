
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
    int n; int x;
    cin >> n >> x;
    vector<pair<int,int>> a (n);
    for (int i = 0; i < n ;i++) {
        int value;cin >> value;
        pair<int,int> p {value,i};
        a[i] = p;
    }
    sort(a.begin(),a.end());
    int l = 0;
    int r = n-1;
    while ( l < r) {
        if (a[l].first+a[r].first==x) {
            cout<< a[l].second+1 <<" " <<a[r].second+1<<'\n';
            return;
        }
        if (a[l].first+a[r].first<x) {
            l++;
           
        }
        else {
            r--;
        }
    }

    cout<<"IMPOSSIBLE"<<'\n';
    
}