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
    int sum = (n * (n + 1)) / 2;
    cout << 2 << endl;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }
    pair<int, int> c;

    int avg = 0;
    avg = (arr[n - 1] + arr[n - 3]) / 2;
    c.first = arr[n - 1];
    c.second = arr[n - 3];
    arr[n - 3] = avg;
    cout << c.first << ' ' << c.second << endl;
    cout << arr[n - 3] << ' ' << arr[n - 3] << endl;
    for (int i = n - 2; i >= 2; i--)
    {
        c.first = arr[i];
        c.second = arr[i] - 2;
        cout << c.first << ' ' << c.second << endl;
    }
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