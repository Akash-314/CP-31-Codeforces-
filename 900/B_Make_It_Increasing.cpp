#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for(int i = n-2; i >= 0; i--){
        while(a[i+1] <= a[i]){
            ans++;
            a[i] /= 2;
            if(a[i] == 0) break;
        }
        if(a[i] == 0 and a[i+1] == 0){
            cout<<-1<<endl;
            return;
        }
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
