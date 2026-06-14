#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool flag = false;
    int gc = __gcd(a[0],a[1]);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(__gcd(a[i],a[j]) <= 2){
                flag = true;
            }
        }
    }
    if(!flag) cout<<"No"<<endl;
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
