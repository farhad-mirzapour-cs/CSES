
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
    int n, m;
    cin>> n >> m;
    multiset<int> a;
    for (int i = 0; i < n;i++) {
        int num; cin >> num;
        a.insert(num);
    }
   
    for (int i = 0; i < m;i++){
        int fund; cin>> fund;
        if(a.size()==0) {
            cout<<"-1"<<'\n';
            continue;

        }
        auto last = a.end();
        last--;
        if (*last <=fund) {
            cout<<*last<<'\n';
            a.erase(last);
            continue;
        }
        auto it = a.lower_bound(fund);
       
        
        if (*it > fund && it == a.begin()) {
            cout<<"-1"<<'\n';
            continue;
        }
        if (*it > fund) it--;
           

        cout<<*it<<'\n';
        a.erase(it);
                
        
       
           
            
        
    }
}
    


    
