
#include <bits/stdc++.h>

using namespace std;
void solve();
void rec(int );
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
char board [8][8];
// 1 occupied , 0 not
int cols [8];
int diag1[15];
int diag2[15];
int ans = 0;
void solve() {
    

    for (int i = 0; i < 8;i++) {
        for (int j = 0; j < 8 ; j++) cin>>board[i][j];
    }
    rec(0);
    cout<<ans;
}

void rec(int row) {
    if (row==8) ans++;
    for (int col = 0 ; col < 8 ; col++) {
        if (board[row][col]!='*' && !cols[col] && !diag1[8+row-col] && !diag2[row+col]) {
            cols[col] = 1;
            diag1[8+row-col] = 1; 
            diag2[row+col] = 1;
            rec(row+1);
            cols[col] = 0;
            diag1[8+row-col] = 0; 
            diag2[row+col] = 0;
            
            
        }
    }
}