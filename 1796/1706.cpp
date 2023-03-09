#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
using namespace std;
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long
#define vi vector<int>

void solve(string &s)
{
    int n = s.length();
    vector<pair<int, int>> st;
    if (s[0] <= s[n - 1])
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] >= s[0] && s[i] <= s[n - 1])
            {
                st.push_back({s[i] - 'a', i + 1});
            }
        }
        cout << s[n - 1] - s[0] << " " << st.size() + 1 + 1 << endl;
        cout << 1 << " ";
        sort(st.begin(), st.end());
        for (auto i : st)
        {
            cout << i.second << " ";
        }
        cout << n;
        cout << endl;
        return;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] <= s[0] && s[i] >= s[n - 1])
            {
                st.push_back({s[i] - 'a', i + 1});
            }
        }
        cout << s[0] - s[n - 1] << " " << st.size() + 1 + 1 << endl;
        cout << 1 << " ";
        sort(st.begin(), st.end());
        for (int i = st.size() - 1; i >= 0; i--)
            cout << st[i].second << " ";
        cout << n;
        cout << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}