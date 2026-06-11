#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(begin(v), end(v));
    int x = v[n-1];
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (x - v[i]);
    }

    cout<<ans<<"\n";
}
