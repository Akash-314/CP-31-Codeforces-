#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    ll x = 2*b - c;
    if(x/a > 0 && x%a == 0) flag = true;
    ll y = (a+c)/2;
    if(y/b > 0 && y%b == 0 && (c - a)%2 == 0) flag = true;
    ll z = 2*b - a;
    if(z/c > 0 && z%c == 0) flag = true;

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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
