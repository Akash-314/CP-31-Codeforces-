#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k; cin >>n>>k;
    vector<int> a(n);
    ll ans = INT_MAX, even = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
        if(a[i] % k == 0) ans = 0;
        ans = min (ans, k - a[i] % k);
    }
    if(k == 4){
        if(even == 1) ans = min(ans, 1LL);
        else if(even >= 2) ans = min(ans, 0LL);
        else if(even == 0) ans = min(ans, 2LL); 
    }
    cout<<ans<<endl;
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
