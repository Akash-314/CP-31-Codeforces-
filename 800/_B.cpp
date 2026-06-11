#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
 int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int mid = v[n/2];
    int i = 0, j = n-1;
    ll ans = 0;
    while(i <= j){
        if(v[i] == v[j]){
            i++;
            j--;
            continue;
        }else{
            ans++;
            i++;
            j--;
        }
    }
    cout<<ans<<endl;

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
