#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,x;
    cin >> x >> n;
    ll ans;
    if(n % 4 == 0){
        ans = 0;
    }else if(n % 4 == 1){
        ans = -n;    
    }
    else if(n % 4 == 2){
        ans = 1;
    }
    else if(n % 4 == 3){
        ans = n + 1;
    }
    if(x % 2 == 0){
        ans = x + ans;
    }else{
        ans = x - ans;
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
