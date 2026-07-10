#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>> a(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x % k == 0) a[i] = {k, i+1};
        else a[i] = {x % k, i+1};
    }
    sort(a.begin(), a.end(), [&](pair<ll,ll>&a, pair<ll,ll>&b){
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    for(auto it : a){
        cout<<it.second<<" ";
    }
    cout<<endl;

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
