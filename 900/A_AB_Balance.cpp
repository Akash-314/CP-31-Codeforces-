#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s; cin >> s;
    int n = s.size();
    if(s[0] != s[n-1]){
        s[0] = s[0] == 'a' ? 'b' : 'a';
    }
    cout<<s<<endl;
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
