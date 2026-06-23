#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;

    int c = 1,d = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            c++;
        }else{
            c = 1;
        }
        d = max(c, d);
    }
    cout<<d + 1<<endl;
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
