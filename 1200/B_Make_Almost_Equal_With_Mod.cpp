#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll k = 2;
    while (true) {
        unordered_set<long long> st;
        for (long long x : a) {
            st.insert(x % k);
            if (st.size() > 2) break;
        }
        if (st.size() == 2) {
            cout << k << '\n';
            return;
        }
        if (k == (1LL << 60)) break;
        k <<= 1;
    }
}
int main() {
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
