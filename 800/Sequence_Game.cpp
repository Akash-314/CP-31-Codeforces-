#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<int> b(n);
    vector<int> a;
    for(int i = 0; i < n; i++) cin >> b[i];
    a.push_back(b[0]);
    for(int i = 1; i < n; i++){
        if(b[i] < b[i-1]){
            a.push_back(1);
        }
        a.push_back(b[i]);
    }
    cout<<a.size()<<endl;
    for(int i = 0; i < a.size(); i++) cout<<a[i]<<" ";
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
