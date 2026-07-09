#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    
    for(int i = 0; i < n; i++) if(a[i] == 1) a[i]++;
    for(int i = 1; i < n; i++){
        if(a[i] % a[i-1] == 0){
            a[i]++;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
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
