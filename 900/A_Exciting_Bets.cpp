#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a < b) swap(a, b);

    if(a == b){
        cout<<0<<" "<<0<<endl;
    }else{
        ll g = a - b;
        ll moves = min(b % g, g - b % g);
        cout<<g<<" "<<moves<<endl;
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
