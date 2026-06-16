#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool isSorted(vector<int> &v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) return false;
    }
    return true;
}
void solve()
{
    int n,k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(isSorted(v)){
        cout<<"Yes"<<endl;
    }else{
        if(k == 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
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
