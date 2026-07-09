#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    if(n < 4 or n % 2 == 1){
        cout<<-1<<endl;
    }else{
        ll mn,mx;
        mx = n/4;
        mn = ceil(n*1.0/6);
        cout<<mn<<" "<<mx<<endl;
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
