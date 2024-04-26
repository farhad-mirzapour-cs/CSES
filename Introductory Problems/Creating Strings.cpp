
#include <bits/stdc++.h>

using namespace std;
vector<string> ans;
vector<int> f (26,0);
int required_size;
void solve();
void rec(string);
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
       cin >> s;
       required_size = s.size();
       for ( char c :s) f[c-'a']++;
       rec("");
       cout<<(int) ans.size() << endl;
       for (int i =0 ; i < ans.size();i++) cout<<ans[i]<<endl;



}

void rec (string curr) {
    if (curr.size()==required_size) {
        ans.push_back(curr);
        return;

    }
    for (int i =0 ; i < 26;i++) {
        if (f[i]!=0) {
            f[i]--;
            curr.push_back('a'+i);
            rec(curr);
            curr.pop_back();
            f[i]++;
        }
    }
}

