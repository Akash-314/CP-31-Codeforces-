#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    int sp = 0,a;
    int temp = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 0){
            temp++;
        }else temp = 0;
        sp = max(temp, sp);
    }
    cout<<sp<<endl;
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
