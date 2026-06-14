#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++){
        cout<< n - a[i] + 1<< " ";
    }
    cout<<endl;
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
