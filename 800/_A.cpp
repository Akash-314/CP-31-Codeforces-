#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,x,s;
    cin >> n >> x >> s;
    string st;
    cin>>st;
    ll ans = 0;
    ll cnt = 0;
    ll t = x*s;
    for(int i = 0; i < n; i++){
        if(st[i] == 'A'){
             cnt = 1;
        }else if(st[i] == 'I'){
            if(ans <= t - s) ans++;
        }else{
            if(ans % s != 0) ans++;
        }
    }
    cout<<ans<<endl;
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
