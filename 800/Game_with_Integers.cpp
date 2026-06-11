#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 1 || n % 3 == 2)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
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
