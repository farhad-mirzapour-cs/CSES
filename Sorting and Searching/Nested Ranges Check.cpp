
#include <bits/stdc++.h>



using namespace std;

void solve ();
bool comp(const pair<int,int> &a, const pair<int,int> &b);
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
    vector<pair<int,int>> ranges(n);
    map<pair<int,int> , int> m ; // range to index
    for (int i = 0; i < n;i++) {
        int x; int y;
        cin >> x >> y;
        ranges[i] = {x,y};
        m[{x,y}] = i;
    }
    
    sort(ranges.begin(),ranges.end(), comp);
    vector<int> isContained(n) ;
    int maxEndSoFar = -1;
    for (auto range : ranges) {
        if (maxEndSoFar >= range.second) isContained[m[range]]=1;
        else isContained[m[range]]=0;
        maxEndSoFar =  max(maxEndSoFar, range.second);

        
    }
    reverse(ranges.begin(),ranges.end());
    vector<int> contains(n) ;
    int minEndSoFar = INT_MAX;
    for (auto range : ranges) {
        if (minEndSoFar <= range.second) contains[m[range]]=1;
        else contains[m[range]]=0;
        minEndSoFar =  min(minEndSoFar, range.second);

        
    }
    for (int i : contains) cout<< i << " ";
    cout<<'\n';
    for (int i : isContained) cout<< i << " ";
    

    
}

bool comp(const pair<int,int> &a, const pair<int,int> &b)
{
    if (a.first < b.first) return true;
    if (b.first < a.first) return false;
    return a.second > b.second;
}