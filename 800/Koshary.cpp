#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve() {
    ll x,y;
    cin>>x>>y;
    if(x%2==0 || y%2==0){
        cout<<"YES"<<"\n";
        return;
    }else{
        cout<<"NO"<<"\n";
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
