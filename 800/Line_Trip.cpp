#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,x; cin>>n>>x;
    vector<int>nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    int minFuel = (x - nums[n-1]) * 2;
    int pre = 0;
    for(int i = 0; i < n; i++){
        minFuel = max(minFuel, nums[i] - pre);
        pre = nums[i];
    }
    cout<<minFuel<<"\n";
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
