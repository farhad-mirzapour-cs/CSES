
#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}

void solve()
{
    string s;
    cin >> s;
    vector<int> letters(26, 0);
    for (int i = 0; i < s.size(); i++)
        letters[s[i] - 'A']++;
    int odd = 0;
    char middle_letter = 'A';
    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        if (letters[i] % 2)
        {
            odd++;
            letters[i]--;
            middle_letter = i + 'A';
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return;
    }
    int siz = s.size();

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] % 2 == 0)
        {
            for (int j = 0; j < letters[i] / 2; j++)
                ans.push_back(i + 'A');
        }
    }
    int ptr = ans.size() - 1;
    if (odd)
        ans.push_back(middle_letter);
    while (ptr >= 0) {
        ans.push_back(ans[ptr]);
        ptr--;
    }
    cout << ans;
}

