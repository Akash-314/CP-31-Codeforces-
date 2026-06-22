#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b,n; cin>>a>>b>>n;
    vector<ll>x(n);
    for(int i = 0; i < n; i++) cin>>x[i];
    ll maxSec = b;
    for(int i = 0; i < n; i++){
        maxSec += min(x[i], a-1);
    }
    cout<<maxSec<<"\n";
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
