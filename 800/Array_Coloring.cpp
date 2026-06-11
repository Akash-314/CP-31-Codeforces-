#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    int a;
    int o = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 2 != 0) o++;
    }
    if(o % 2 != 0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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
