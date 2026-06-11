#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int a;
    int pos = 0, neg = 0;
    int op = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
            pos++;
        else
            neg++;
        sum += a;
    }
    while (pos < neg || neg % 2 == 1)
    {
        op++;
        pos++;
        neg--;
    }
    cout << op << endl;
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
