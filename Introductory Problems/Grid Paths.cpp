
#include <bits/stdc++.h>

using namespace std;
void solve ();
void dfs(int,int,int);
bool inbound(int,int);
bool cango (int  , int );
int dirs [5] = {0,1,0,-1,0};
int ans = 0;
bool visited [7][7];
string path;
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

       cin >> path;

        dfs(0,0,0);
        cout<<ans<<'\n';

}

bool cango (int x , int y) {
    if (!inbound(x,y)) return false;
    return (visited[x][y]==0);
}

void dfs (int x, int y, int moves) {
   
    if ((x==6 && y==0)) { 
        if (moves==48) ans++;
        return;
    }
    if (!inbound(x,y) || visited[x][y]) return;

    
    
    int ans = 0;
    visited[x][y] = 1;
    if (path[moves]=='?' || path[moves]=='U') {
        if (cango(x-1,y) && !  (!cango(x-2,y) && cango(x-1,y+1) && cango(x-1,y-1) ) ) dfs(x-1,y,moves+1);
        

    }
    if (path[moves]=='?' || path[moves]=='D') {
        if (cango(x+1,y) && !  (!cango(x+2,y) && cango(x+1,y+1) && cango(x+1,y-1) ) ) dfs(x+1,y,moves+1);
        

    }
    if (path[moves]=='?' || path[moves]=='L') {
        if (cango(x,y-1) && !  (!cango(x,y-2) && cango(x-1,y-1) && cango(x+1,y-1) ) ) dfs(x,y-1,moves+1);
        

    }
    if (path[moves]=='?' || path[moves]=='R') {
        if (cango(x,y+1) && !  (!cango(x,y+2) && cango(x-1,y+1) && cango(x+1,y+1) ) ) dfs(x,y+1,moves+1);
        

    }
    visited[x][y] = 0;
    


}


bool inbound (int x , int y) {
    return ( x>=0 && y >=0 && x <=6 && y<=6 );
}