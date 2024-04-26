
#include <bits/stdc++.h>
void solve();
long long power (long long , long long );
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}

void solve() {
    long long n =0 ;
    cin >> n;
 	long long dlength = 1;
    long long dcount = 9;
    long long tot = 0;
    while (tot+(dlength*dcount) < n) {
        tot+=(dlength*dcount);
        dlength++;
        dcount*=10;
    }
    n-=tot;
    n--;
    long long number = (n)/dlength +  power(10,dlength-1) ;
    n=n%dlength;
    string s = to_string(number);
    cout<< s[n] << '\n';
    

}

long long power (long long a , long long b) { // positive a and b
    long long ans = 1;
    while (b--) {
        ans*=a;
    }
    return ans;
}