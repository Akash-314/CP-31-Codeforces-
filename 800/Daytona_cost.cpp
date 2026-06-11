#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    for(int i = 0; i < n; i++){
        if(v[i] == k){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
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
