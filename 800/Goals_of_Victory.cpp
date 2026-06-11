#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    ll sum = 0,a;
    for(int i = 1; i < n; i++){
        cin >> a;
        sum += a;
    }
    cout<<-1*sum<<endl;
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
