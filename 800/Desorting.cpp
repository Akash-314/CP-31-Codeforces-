#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isSorted(vector<int> &a){
    for(int i = 1; i < a.size(); i++){
        if(a[i-1] > a[i]) return false;
    }
    return true;
}
void solve()
{
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(!isSorted(a)) cout<<0<<endl;
    else{
        int mn = INT_MAX;
        for(int i = 1; i < n; i++){
            mn = min(mn , a[i] - a[i-1]);
        }
        cout<< (mn/2) + 1 << endl;
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
