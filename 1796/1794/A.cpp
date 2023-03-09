#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _sort(x) sort(all(x))
#define _rsort(x) sort(rall(x))
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define loop(i, N) for (int i = 0; i < N; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef map<int, int> mpii;
typedef map<pi, int> mppi;
typedef vector<string> vs;
#define mod1 1000000007
#define mod2 998244353
#define endl '\n'
// for(auto &i : s){
//         if(isupper(i)){
//             i = tolower(i);
//         }
//     }

int add(int a, int b)
{
    return (a + b) % mod1;
}
int sub(int a, int b)
{
    return (a - b + mod1) % mod1;
}
int mul(int a, int b)
{
    return (a % mod1) * (b % mod1) % mod1;
}
void isPalindrome(string S)
{
    // Stores the reverse of the
    // string S

    // Reverse the string P
    reverse(S.begin(), S.end());

    // If S is equal to P
}
void solve()
{
    int n;
    cin >> n;
    string s[2 * n - 2];
    map<int, vector<string>> g;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        cin >> s[i];
        g[s[i].length()].push_back(s[i]);
    }
    string a = g[n - 1][0];
    string b = g[n - 1][1];
    reverse(a.begin(), a.end());
    if (a == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;

    while (T--)
        solve();
}
