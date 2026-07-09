#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n; cin >> n;
    if((n & n-1) == 0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
