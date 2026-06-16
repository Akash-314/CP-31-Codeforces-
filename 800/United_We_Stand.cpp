#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    vector<int> a(n),b,c;
    for(int i = 0; i < n; i++) cin>>a[i];

    ll mx = *max_element(a.begin(),a.end());
    
    for(int i = 0; i < n; i++) {
        if(a[i] != mx){
            b.push_back(a[i]);
        }else c.push_back(a[i]);
    }
    if(b.size() == 0){
        cout<<-1<<endl;
    }else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto i : b){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i : c){
            cout<<i<<" ";
        }
        cout<<endl;
    }
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
