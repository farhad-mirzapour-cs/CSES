
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
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > q;
    int roomNum = 1;
    vector<pair<int,int>> rooms;
    vector<pair<int,int>> visitors;
    vector<pair<int,int>> attendingOrder;
     for (int i = 0;  i < n;i++) {
        int a; int b; 
        cin >> a >> b;
        visitors.push_back({a,b});
        attendingOrder.push_back({a,i});
     }
   
    //sort based on starting time
    sort(attendingOrder.begin(),attendingOrder.end());
    for (int i = 0;  i < n;i++) {
        int a = visitors[attendingOrder[i].second].first;
        int b = visitors[attendingOrder[i].second].second;
        
        if (q.size() && q.top().first < a ) {
            
            rooms.push_back( {attendingOrder[i].second, q.top().second});
            q.push({b,q.top().second});
            q.pop();

        }
        //need a new room
        else {
            rooms.push_back({attendingOrder[i].second, roomNum});
            q.push({b,roomNum});
            roomNum++;
        }
        
        


    }
    sort(rooms.begin(),rooms.end());
    cout<<roomNum-1<<'\n';
    for (auto i : rooms) cout<<i.second<<" ";
    
}