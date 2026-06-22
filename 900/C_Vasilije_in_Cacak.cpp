#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k, x; cin >> n >> k >> x;
    ll minSum = k*(k+1)/2;
    ll s = n-k;
    ll sum = n*(n+1)/2;
    ll maxSum = sum - s*(s+1)/2;

    if(x >= minSum && x <= maxSum){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
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
