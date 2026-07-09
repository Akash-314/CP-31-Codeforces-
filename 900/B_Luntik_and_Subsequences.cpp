#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    ll ones = 0, zeros = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] == 1) ones++;
        if(a[i] == 0) zeros++;
    }
    ll ways = pow(2, zeros) * ones;
    cout<< ways << endl;

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
