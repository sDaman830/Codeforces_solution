#include <bits/stdc++.h>
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

void dfs(vvi &graph, int u, vi &parent)
{
    for (auto i : graph[u])
    {
        if (parent[u] != i)
        {
            parent[i] = u;
            dfs(graph, i, parent);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = 0;
    int r = 1e9;
    while (l < r)
    {
        int m = (l + r) / 2;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
            {
                ans += b[i];
            }
        }
        if (ans > m)
            l = m + 1;
        else
            r = m;
    }
    cout << l << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;

    while (T--)
        solve();
}