#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<int, int> mp;
    vector<int> arr;
    for (int i = 0; i < n; i++)
        mp[v[i]]++;

    if (mp.size() > 2)
    {
        cout << "NO" << endl;
    }
    else if (mp.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        for (auto x : mp)
        {
            arr.push_back(x.second);
        }
        if (abs(arr[0] - arr[1]) <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
