
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
    int x; int n;
    cin >> x >> n;
    multiset<int> distances; 
    set<int> lights;
    lights.insert(0);
    lights.insert(x);
    distances.insert(x);
    for (int i = 0; i < n;i++) {
        int light ;
        cin >> light;
        if (light == x || light ==0) {
           
            cout<<*distances.end()<<" ";
            continue;
        }
        
        auto next = lights.upper_bound(light);
        auto before = next;
        before--;
        //cout<<" " <<*before<<" " << light << " " << *next << endl;
        int currdist = *next- *before;
        distances.erase(distances.lower_bound(currdist));
        distances.insert(light - *before);
        distances.insert(*next - light);
        cout<<*distances.rbegin()<<" ";
        
        lights.insert(light);
 



    }

    
}