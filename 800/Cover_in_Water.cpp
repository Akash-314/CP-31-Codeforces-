#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int Empty = 0;
    int totalEmpty = 0;
    int consecutive = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            Empty++;
            totalEmpty++;
            consecutive = max(consecutive, Empty);
        }else Empty = 0;
    }
    if(consecutive >= 3) cout<<2<<endl;
    else{
        cout<<totalEmpty<<endl;
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
