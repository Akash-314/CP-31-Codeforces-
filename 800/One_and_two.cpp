#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    int cnt = 0;
    int acnt = 0;
    for(int i = 0; i <n; i++){
        cin>>a[i];
        if(a[i] == 2)cnt++;
    }
    int ans;
    if(cnt % 2 == 1){
        ans = -1;
    }else{
        for(int i = 0; i < n; i++){
        if(a[i] == 2)acnt++;
        if(acnt == cnt/2){
            ans = i+1;
            break;
        }
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
