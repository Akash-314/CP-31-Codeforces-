#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n; cin >> n;
    vector<ll>a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    ll cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i]%2 == a[i+1]%2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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
