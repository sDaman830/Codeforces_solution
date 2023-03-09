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
void solve()
{
    int n;
    cin >> n;
    vi d;
    priority_queue<int> p;
    int aa = 0;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> aa;
        d.push_back(aa);

        p.push(d[i]);
    }
    vi a;
    vi b;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n * 2; i++)
    {
        if (c1 < c2)
        {
            a.push_back(p.top());
            c1 += p.top();
            p.pop();
        }
        else
        {
            b.push_back(p.top());
            c2 += p.top();
            p.pop();
        }
    }
    if (c1 < c2)
    {
        c1 = c1 + b[n - 1];
        c2 = c2 - b[n - 1];
        cout << abs(c1 - c2) << endl;
    }
    else if (c2 < c1)
    {
        c2 = c2 + a[n - 1];
        c1 = c1 - a[n - 1];
        cout << abs(c1 - c2) << endl;
    }
    else
        cout << min(a[n - 1], b[n - 1]) << endl;
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