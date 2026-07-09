#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++) cin >> p[i];

    for(int i = 2; i < n; i++){
        if(p[i - 1] < p[i] and p[i] > p[i + 1]){
            cout<<"YES"<<endl;
            cout<<i - 1 <<' '<<i<<' '<<i + 1<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
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
