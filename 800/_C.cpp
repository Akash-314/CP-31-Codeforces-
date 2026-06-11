#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    ll mn = LLONG_MAX;

    for(int i = 0; i < n; i++) {
        sum += a[i];

        ll avg = sum / (i + 1);
        mn = min(mn, avg);

        cout << mn << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}