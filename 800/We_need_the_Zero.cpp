#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ a[i];
    }
    if (n % 2 == 1)
    {
        cout << x << endl;
    }
    else
    {
        if (x == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}