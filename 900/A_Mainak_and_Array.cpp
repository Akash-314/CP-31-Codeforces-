#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    int mx = INT_MIN;
    int mn = INT_MAX;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = a[n-1] - a[0];

    for(int i = 1; i < n; i++){
        ans = max(ans, a[i] - a[0]);
    }
    for(int i = 0; i < n-1; i++){
        ans = max(ans, a[n-1] - a[i]);
    }
    for(int i = 0; i < n-1; i++){
        ans = max(ans, a[i] - a[i+1]);
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
