#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int x,k; cin >> x >> k;

    if(x % k != 0){
        cout<<1<<endl;
        cout<<x<<endl;
    }else{
        cout<<2<<endl;
        cout<<1<<" ";
        cout<<x-1<<endl;
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
