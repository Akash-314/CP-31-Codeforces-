#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n; cin >> n;
    int i = 1;
    while(true){
        if(n % i != 0) break;
        else i++;
    }
    cout<<i-1<<endl;
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
