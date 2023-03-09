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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> q(k);
    for (int i = 0; i < k; i++)
    {
        cin >> q[i];
    }
    int s = 0;
    int l = n - 1;
    int mid = 0;
    int j = k;
    k = 0;
    int ans;
    while (j > 0)
    {
        int s = 0;
        int l = n;
        int mid = 0;

        while (s <= l)
        {
            mid = (s + l) / 2;
            if (a[mid] < q[k])
            {
                s = mid + 1;
            }
            else if (a[mid] > q[k])
            {
                l = mid - 1;
            }
            else
            {
                ans = mid;
                break;
            }
        }
        if (a[ans] == q[k])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        k++;
        j--;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
}