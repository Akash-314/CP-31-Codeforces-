#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    ll count = 0;
    // -2 -2 4 3 -- NO
    // 3
    for(int i = 0; i < n-1; i++){
        if(v[i] < 0){
            if(v[i] + v[i+1] > 0) count++;
        }
        else count++;
    }
    if(v[n-1] > 0) count+=1;
    cout<<count<<endl;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
// 3
// -3 4 -2
// 2
// -2 3
// 4
// 2 3 2
// 4
// -1 -1 -3 -4

//Answer

// 2
// 2
// 4
// 3
// 0