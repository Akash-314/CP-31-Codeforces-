#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k; cin>>n>>k;
    if(n % 2 == 0 || (n-k) % 2 == 0){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
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
